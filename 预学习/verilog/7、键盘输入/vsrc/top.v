module top (
  input clk,clrn,ps2_clk,ps2_data,
  output [7:0] seg0,seg1,seg2,seg3,seg4,seg5
);
  reg nextdata_n;
  reg ready;
  reg overflow;
  reg [7:0] data,tmp_data,out_data;
  reg [7:0] key_count;
  reg [7:0] ascii;

  //四个状态
  reg [3:0] a=4'b0000;
  reg [3:0] b=4'b0001;
  reg [3:0] c=4'b0010;
  reg [3:0] d=4'b0100;

  reg [3:0] state=a,next_state;

  ps2_keyboard my_keyboard (clk,clrn,ps2_clk,ps2_data,tmp_data,ready,nextdata_n,overflow,key_count);
  ps2_to_ascii my_ps2_to_ascii (data,ascii);

  bcd7seg my_seg1 (data[3:0],seg0);
  bcd7seg my_seg2 (data[7:4],seg1);
  bcd7seg my_seg3 (ascii[3:0],seg2);
  bcd7seg my_seg4 (ascii[7:4],seg3);
  bcd7seg my_seg5 (key_count[3:0],seg4);
  bcd7seg my_seg6 (key_count[7:4],seg5);

  //同步转移
  always @(posedge clk or ps2_clk) begin
    if (clrn) state<=a;
    else  state<=next_state;
    
  end

  //异步转移
  always @(*) begin
    if(ready) begin
      case (state)
        a:next_state=b;
        b:next_state=(tmp_data==8'hf0)?c:b;
        c:next_state=(tmp_data!=8'hf0)?d:c;
        d:next_state=(tmp_data!=8'hf0)?b:d;
      endcase
      out_data=tmp_data;
    end
  end

  assign data=(state==b)?out_data:8'b0;
endmodule

module ps2_to_ascii (input [7:0]x, output [7:0]y);
  reg [7:0] tmp;

  always @(*) begin
    case (x)
    8'h1c:tmp=8'h61;
    8'h32:tmp=8'h62;
    8'h21:tmp=8'h63;
    8'h23:tmp=8'h64;
    8'h24:tmp=8'h65;
    8'h2b:tmp=8'h66;
    8'h34:tmp=8'h67;
    8'h33:tmp=8'h68;
    8'h43:tmp=8'h69;
    8'h3b:tmp=8'h6a;
    8'h42:tmp=8'h6b;
    8'h4b:tmp=8'h6c;
    8'h3a:tmp=8'h6d;
    8'h31:tmp=8'h6e;
    8'h44:tmp=8'h6f;
    8'h4d:tmp=8'h70;
    8'h15:tmp=8'h71;
    8'h2d:tmp=8'h72;
    8'h1b:tmp=8'h73;
    8'h2c:tmp=8'h74;
    8'h3c:tmp=8'h75;
    8'h2a:tmp=8'h76;
    8'h1d:tmp=8'h77;
    8'h22:tmp=8'h78;
    8'h35:tmp=8'h79;
    8'h1a:tmp=8'h7a;
    8'hf0:tmp=0;
    default:tmp=0;
    endcase
  end

  assign y=tmp;
endmodule
