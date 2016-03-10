// Pisca LED

module piscar (

    input clock,
    input entrada
    output [1:0] LEDG
    
);

    /* reg */
    reg data1 = 1'b1;
    reg [32:0] counter;
    reg state;
    
    /* assign */
    assign LEDG[0] = state;
    assign LEDG[1] = data1;
    
    /* always */
    always @ (posedge clock) begin
        counter <= counter + 1;
        state <= counter[26]; // estado
    end

endmodule

