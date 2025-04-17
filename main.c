#include <stdio.h>
#include "matrix.h"

int main() {
    int a_data[MAX_ROWS][MAX_COLS] = {
        {6, 4},
        {8, 3}
    };

    int b_data[MAX_ROWS][MAX_COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int c_data[MAX_ROWS][MAX_COLS] = {
        {2, 4, 6},
        {1, 3, 5}
    };

    Matrix A = createMatrix(2, 2, a_data);
    Matrix B = createMatrix(2, 3, b_data);
    Matrix C = createMatrix(2, 3, c_data);

    Matrix B_scaled = scale(B, 3);
    Matrix C_T = transpose(C);
    Matrix result = multiply(B_scaled, C_T);
    Matrix D = add(A, result);

    printf("Result D = A + (3 * B) × Cᵗ:\n");
    printMatrix(D);

    return 0;
}
