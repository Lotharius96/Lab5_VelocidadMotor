# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\jeanpierre\Documents\PSoC Creator\teclado\teclado.cydsn\teclado.cyprj
# Date: Mon, 13 Jan 2020 19:29:20 GMT
#set_units -time ns
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Keypad_1_Clock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2401 4801} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {timer_clock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 65537 131073} [list [get_pins {ClockBlock/dclk_glb_1}]]


# Component constraints for C:\Users\jeanpierre\Documents\PSoC Creator\teclado\teclado.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\jeanpierre\Documents\PSoC Creator\teclado\teclado.cydsn\teclado.cyprj
# Date: Mon, 13 Jan 2020 19:29:09 GMT
