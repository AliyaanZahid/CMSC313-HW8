#include "Matrix.hpp"
#include <iostream>

using namespace std;

Matrix::Matrix(int r, int c) : rows(r), cols(c) {
    data = vector<vector<int>>(r, vector<int>(c, 0));
}

Matrix::Matrix(const vector<vector<int>>& d) {
    data = d;
    rows = d.size();
    cols = d[0].size();
}

Matrix Matrix::transpose() const {
    vector<vector<int>> result(cols, vector<int>(rows));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[j][i] = data[i][j];
    return Matrix(result);
}

Matrix Matrix::operator+(const Matrix& other) const {
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = data[i][j] + other.data[i][j];
    return Matrix(result);
}

Matrix Matrix::operator*(const Matrix& other) const {
    vector<vector<int>> result(rows, vector<int>(other.cols, 0));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < other.cols; ++j)
            for (int k = 0; k < cols; ++k)
                result[i][j] += data[i][k] * other.data[k][j];
    return Matrix(result);
}

Matrix Matrix::operator*(int scalar) const {
    vector<vector<int>> result = data;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] *= scalar;
    return Matrix(result);
}

void Matrix::print() const {
    for (const auto& row : data) {
        for (int val : row)
            cout << val << " ";
        cout << "\n";
    }
}
