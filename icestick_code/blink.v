`define GLITCH_DURATION 36

module top (
	input  clk,
	output LED1,
	output LED2,
	output LED3,
	output LED4,
	output LED5,
  output J1_1
);

  assign LED1 = outreg;
  assign LED2 = ~outreg;
  assign J1_1 = outreg;

  reg outreg;
  reg [31:0] counter;

  initial begin
    counter <= 0;
    outreg <= 0;
  end

	always @(posedge clk) begin
    if (counter == 20000000 && outreg) begin
      counter <= 0;
      outreg <= 0;
    end
    else if (counter == `GLITCH_DURATION && !outreg) begin
      counter <= 0;
      outreg <= 1;
    end
    else begin
      counter <= counter +1;
    end
	end
	
endmodule
