// Pisca LED

module piscaLed (

    input CLOCK_50,
    output [0:0] LEDG
    
);

    /* reg */
    reg [31:0] contador = 0;
    reg estado = 0;
    
    /* assign */
    assign LEDG[0] = estado;
    
    /* always */
    always @ (posedge CLOCK_50) begin
        
        if(contador == 50000000) begin
          estado <= ~estado; // estado
          contador <= 0;
        end else begin 
		contador <= contador + 1;
	end
    end

endmodule
