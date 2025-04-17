#include "Matrix.hpp"
#include <iostream>

using namespace std;

int main() {
    Matrix A({
        {1, 2},
        {3, 4}
    });

    Matrix B({
        {5, 6},
        {7, 8}
    });

    Matrix C = A + B;
    cout << "A + B = \n";
    C.print();

    Matrix D = A * 2;
    cout << "A * 2 = \n";
    D.print();

    Matrix E = A * B;
    cout << "A * B = \n";
    E.print();

    Matrix F = A.transpose();
    cout << "Transpose of A = \n";
    F.print();

    return 0;
}
