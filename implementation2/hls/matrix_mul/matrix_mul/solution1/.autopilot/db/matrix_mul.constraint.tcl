set clock_constraint { \
    name clk \
    module matrix_mul::matrix_mul \
    port ap_clk \
    period 10 \
    uncertainty 3 \
}

set all_path {}

set false_path {}

