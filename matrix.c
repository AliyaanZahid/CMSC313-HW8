#include "matrix.h"
#include <stdio.h>

Matrix createMatrix(int rows, int cols, int input[MAX_ROWS][MAX_COLS]) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            m.data[i][j] = input[i][j];
    return m;
}

Matrix transpose(Matrix m) {
    Matrix result;
    result.rows = m.cols;
    result.cols = m.rows;
    for (int i = 0; i < m.rows; i++)
        for (int j = 0; j < m.cols; j++)
            result.data[j][i] = m.data[i][j];
    return result;
}

Matrix add(Matrix a, Matrix b) {
    Matrix result;
    result.rows = a.rows;
    result.cols = a.cols;
    for (int i = 0; i < a.rows; i++)
        for (int j = 0; j < a.cols; j++)
            result.data[i][j] = a.data[i][j] + b.data[i][j];
    return result;
}

Matrix multiply(Matrix a, Matrix b) {
    Matrix result;
    result.rows = a.rows;
    result.cols = b.cols;
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < a.cols; k++)
                result.data[i][j] += a.data[i][k] * b.data[k][j];
        }
    }
    return result;
}

Matrix scale(Matrix m, int scalar) {
    Matrix result;
    result.rows = m.rows;
    result.cols = m.cols;
    for (int i = 0; i < m.rows; i++)
        for (int j = 0; j < m.cols; j++)
            result.data[i][j] = m.data[i][j] * scalar;
    return result;
}

void printMatrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            printf("%d ", m.data[i][j]);
        }
        printf("\n");
    }
}
