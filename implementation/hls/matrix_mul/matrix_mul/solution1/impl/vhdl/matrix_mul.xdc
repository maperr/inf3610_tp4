create_clock -name CLK -period 10.000000 -waveform "0.000000 5.0" ClockPort

#set_input_delay 0 -clock CLK  [all_inputs]
#set_output_delay 0 -clock CLK [all_outputs]


