module random(ctrl, seg_1, seg_2);
  input ctrl;
  output [7:0]seg_1,seg_2;

  reg [7:0]x=1;
  reg [7:0]tmp,tmp_seg1,tmp_seg2;

  shift ins1 (x,tmp);

  always @(posedge ctrl) begin 
    if(ctrl) begin
      x<=tmp;
    end
  end

  bcd7seg sge1 (x[3:0],seg_1);
  bcd7seg sge2 (x[7:4],seg_2);
endmodule

module bcd7seg(input [3:0]b, output reg [7:0]h);
  always @(*) begin
    case(b)
    0:h = 8'b00000011;
    1:h = 8'b10011111;
    2:h = 8'b00100101;
    3:h = 8'b00001101;
    4:h = 8'b10011001;
    5:h = 8'b01001001;
    6:h = 8'b01000001;
    7:h = 8'b00011111;
    8:h = 8'b00000001;
    9:h = 8'b00001001;
    10:h = 8'b00010001;
    11:h = 8'b11000001;
    12:h = 8'b01100011;
    13:h = 8'b10000101;
    14:h = 8'b01100001;
    15:h = 8'b01110001;
    endcase 
  end
endmodule

module shift(input [7:0]x, output [7:0]y);
  assign y={x[0]^x[2]^x[3]^x[4],x[7:1]};
endmodule
