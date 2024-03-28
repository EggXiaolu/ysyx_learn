module encode83(x,en,y,h);
    input [7:0]x;
    input en;
    output reg [2:0]y;
    output reg [7:0]h;

    always @(x or en) begin 
      if(en) begin
        y=3'b000;
        for(int i=0;i<8;i++) begin
          if(x[i]==1) y=i[2:0];
        end
      end
      else y=3'b000;
    end
    bcd7seg ins (y,h);

endmodule

module bcd7seg(input [2:0]b, output reg [7:0]h);
  always @(*) begin
    case(b)
    0:h = ~(8'b11111101);
    1:h = ~(8'b01100000);
    2:h = ~(8'b11011010);
    3:h = ~(8'b11110010);
    4:h = ~(8'b01100110);
    5:h = ~(8'b10110110);
    6:h = ~(8'b10111110);
    7:h = ~(8'b11100000);
    default:h = ~(8'b00000000);
    endcase 
  end
endmodule
