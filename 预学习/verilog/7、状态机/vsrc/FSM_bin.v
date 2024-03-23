module FSM_bin(
  inout clk,in,reset,
  output reg out);

  parameter [3:0]S0=0,S1=1,S2=2,S3=3,S4=4,S5=5,S6=6,S7=7,S8=8;
  wire [3:0] state_din,state_dout;
  wire state_wen;

  SimReg state (clk,reset,state_din,state_dout);
  
  MuxKeyWithDefault#(9, 4, 1) outMux(.out(out), .key(state_dout), .default_out(0), .lut({
    S0, 1'b0,
    S1, 1'b0,
    S2, 1'b0,
    S3, 1'b0,
    S4, 1'b1,
    S5, 1'b0,
    S6, 1'b0,
    S7, 1'b0,
    S8, 1'b1
  }));

  MuxKeyWithDefault#(9, 4, 4) stateMux(.out(state_din), .key(state_dout), .default_out(S0), .lut({
    S0, in ? S5 : S1,
    S1, in ? S5 : S2,
    S2, in ? S5 : S3,
    S3, in ? S5 : S4,
    S4, in ? S5 : S4,
    S5, in ? S6 : S1,
    S6, in ? S7 : S1,
    S7, in ? S8 : S1,
    S8, in ? S8 : S1
  }));

endmodule

module SimReg (
  input clk,reset,
  input [3:0] state_din,
  output reg [3:0] state_dout);

  always @(posedge clk) begin 
    if(reset) state_dout<=4'b0;
    else state_dout<=state_din;
  end

endmodule

module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule

module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end

endmodule
