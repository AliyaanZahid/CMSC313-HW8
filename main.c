#include <stdio.h>
#include "matrix.h"

int main() {
    int data1[MAX_ROWS][MAX_COLS] = {
        {1, 2},
        {3, 4}
    };

    int data2[MAX_ROWS][MAX_COLS] = {
        {5, 6},
        {7, 8}
    };

    Matrix A = createMatrix(2, 2, data1);
    Matrix B = createMatrix(2, 2, data2);

    Matrix C = add(A, B);
    printf("A + B = \n");
    printMatrix(C);

    Matrix D = scale(A, 2);
    printf("A * 2 = \n");
    printMatrix(D);

    Matrix E = multiply(A, B);
    printf("A * B = \n");
    printMatrix(E);

    Matrix F = transpose(A);
    printf("Transpose of A = \n");
    printMatrix(F);

    return 0;
}
