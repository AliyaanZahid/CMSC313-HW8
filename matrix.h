#ifndef MATRIX_H
#define MATRIX_H

#define MAX_ROWS 10
#define MAX_COLS 10

typedef struct {
    int rows;
    int cols;
    int data[MAX_ROWS][MAX_COLS];
} Matrix;

Matrix createMatrix(int rows, int cols, int input[MAX_ROWS][MAX_COLS]);
Matrix transpose(Matrix m);
Matrix add(Matrix a, Matrix b);
Matrix multiply(Matrix a, Matrix b);
Matrix scale(Matrix m, int scalar);
void printMatrix(Matrix m);

#endif
