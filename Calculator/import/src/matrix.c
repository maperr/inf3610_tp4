#include "matrix.h"

/* matrix   0 */
__attribute__ ((aligned (8))) unsigned int matrix_0[MATRIX_ROWS*MATRIX_COLUMNS] = {
    0,     0,     0,
    0,     0,     0,
    0,     0,     0
};

/* matrix   1 */
__attribute__ ((aligned (8))) unsigned int matrix_1[MATRIX_ROWS*MATRIX_COLUMNS] = {
    1,     1,     1,
    1,     1,     1,
    1,     1,     1
};

/* matrix   2 */
__attribute__ ((aligned (8))) unsigned int matrix_2[MATRIX_ROWS*MATRIX_COLUMNS] = {
    2,     2,     2,
    2,     2,     2,
    2,     2,     2
};

/* matrix   3 */
__attribute__ ((aligned (8))) unsigned int matrix_3[MATRIX_ROWS*MATRIX_COLUMNS] = {
    3,     3,     3,
    3,     3,     3,
    3,     3,     3
};

/* matrix   4 */
__attribute__ ((aligned (8))) unsigned int matrix_4[MATRIX_ROWS*MATRIX_COLUMNS] = {
    4,     4,     4,
    4,     4,     4,
    4,     4,     4
};

/* matrix   5 */
__attribute__ ((aligned (8))) unsigned int matrix_5[MATRIX_ROWS*MATRIX_COLUMNS] = {
    5,     5,     5,
    5,     5,     5,
    5,     5,     5
};

/* matrix   6 */
__attribute__ ((aligned (8))) unsigned int matrix_6[MATRIX_ROWS*MATRIX_COLUMNS] = {
    6,     6,     6,
    6,     6,     6,
    6,     6,     6
};

/* matrix   7 */
__attribute__ ((aligned (8))) unsigned int matrix_7[MATRIX_ROWS*MATRIX_COLUMNS] = {
    7,     7,     7,
    7,     7,     7,
    7,     7,     7
};

/* matrix   8 */
__attribute__ ((aligned (8))) unsigned int matrix_8[MATRIX_ROWS*MATRIX_COLUMNS] = {
    8,     8,     8,
    8,     8,     8,
    8,     8,     8
};

/* matrix   9 */
__attribute__ ((aligned (8))) unsigned int matrix_9[MATRIX_ROWS*MATRIX_COLUMNS] = {
    9,     9,     9,
    9,     9,     9,
    9,     9,     9
};

/* global matrix */
unsigned int* matrix_data[MATRIX_COUNT] = {
&matrix_0[0], &matrix_1[0], &matrix_2[0], &matrix_3[0], &matrix_4[0], &matrix_5[0], &matrix_6[0], &matrix_7[0], &matrix_8[0], &matrix_9[0]
};
