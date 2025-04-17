#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    Matrix(int r, int c);
    Matrix(const vector<vector<int>>& d);

    Matrix transpose() const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(int scalar) const;

    void print() const;
};

#endif
