#include "Matrix.hpp"
#include <iostream>

using namespace std;

int main() {
    Matrix A({
        {6, 4},
        {8, 3}
    });

    Matrix B({
        {1, 2, 3},
        {4, 5, 6}
    });

    Matrix C({
        {2, 4, 6},
        {1, 3, 5}
    });

    Matrix D = A + (B * 3) * C.transpose();

    cout << "Result D = A + (3 * B) × Cᵗ:\n";
    D.print();

    return 0;
}
