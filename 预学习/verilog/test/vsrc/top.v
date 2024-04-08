module top(
  input a,
  input b,
  output led
);
  assign led = a^b;
endmodule
