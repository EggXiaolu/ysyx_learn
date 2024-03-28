module ALU(op,a,b,seg1,seg2,overflow,carry,zero);
    input [2:0]op;
    input [3:0]a;
    input [3:0]b;
    output [7:0]seg1;
    output [7:0]seg2;
    output overflow;
    output carry;
    output zero;

    reg [3:0] y,y_tmp;
    reg [3:0]a_sub_b;
    reg is_sub=op[0];
    reg overflow1,carry1,zero1;
    adder my_adder (op[0], a, b, y_tmp, overflow, carry, zero);
    adder sub (1, a, b, a_sub_b, overflow1, carry1, zero1);
    
    always @(*) begin
      case(op)
        3'b000,
        3'b001: y=y_tmp;
        3'b010: y=(~a);
        3'b011: y=(a&b);
        3'b100: y=(a|b);
        3'b101: y=(a^b);
        3'b110: y=(a_sub_b[3]==1)?1:0;
        3'b111: y=(a==b)?1:0;
        default: y=0;
      endcase
    end

    bcd7seg seg_1 (y, seg1);
    neg_seg seg_2 (y[3],seg2);

endmodule

module bcd7seg(input [3:0]b, output reg [7:0]h);
  always @(*) begin
    case(b)
    0:h = ~(8'b11111100);
    1:h = ~(8'b01100000);
    2:h = ~(8'b11011010);
    3:h = ~(8'b11110010);
    4:h = ~(8'b01100110);
    5:h = ~(8'b10110110);
    6:h = ~(8'b10111110);
    7:h = ~(8'b11100000);
    8:h = ~(8'b11111110);
    9:h = ~(8'b11100000);
    10:h = ~(8'b10111110);
    11:h = ~(8'b10110110);
    12:h = ~(8'b01100110);
    13:h = ~(8'b11110010);
    14:h = ~(8'b11011010);
    15:h = ~(8'b01100000);
    endcase 
  end
endmodule

module neg_seg(input b, output reg [7:0]h);
  always @(*) begin
    case(b)
    1:h = ~(8'b00000010);
    0:h = ~(8'b11111111);
    endcase 
  end
endmodule

module adder(input sub ,[3:0]a, [3:0]b,
            output [3:0]y,
            output overflow,carry,zero);
  wire [3:0] sub_b;
  assign sub_b=b^{4{sub}};
  assign {carry,y} = a+sub_b+{4'b0000,sub};
  assign overflow = (a[3]==sub_b[3])&&(y[3]!=a[3]);
  assign zero = y==0;

endmodule