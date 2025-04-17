# Matrix Library in C and C++

## AUTHORING
Mohammad Aliyaan Zahid  
UMBC – CMSC313: Computer Organization & Assembly Language  
Spring 2025 – Monday/Wednesday 2:30PM Section

---

## PURPOSE OF SOFTWARE

The objective is to build a reusable matrix library in both C and C++ that supports core operations like addition, scalar multiplication, matrix multiplication, and transposition.
While the expression D = A + (3 * B) × Cᵗ was used as a reference example, the code is designed to handle any valid input matrices and expressions using the provided operations.

---

## FILES

C++ Version:
- Matrix.hpp – Declares the Matrix class and its operations
- Matrix.cpp – Implements matrix operations (add, multiply, transpose, scale)
- main.cpp – Test file that evaluates D = A + (3 * B) × Cᵗ

C Version:
- matrix.h – Defines the Matrix struct and declares matrix functions
- matrix.c – Implements all matrix operations
- main.c – Test file that performs the same matrix evaluation

Other Files:
- Makefile – Compiles both versions
- screenshot.png – Screenshot of program output for grader reference
- README.md – This file

---

## BUILD INSTRUCTIONS
To compile both versions: make
To compile individually: make matrix_cpp make matrix_c
To run the programs: ./matrix_cpp ./matrix_c
To clean up compiled binaries: make clean


---

## TESTING METHODOLOGY
The program tests all required operations:

Matrix addition (A + B)

Scalar multiplication (A * 2)

Matrix multiplication (A * B)

Transposition (Aᵗ)

---

## ADDITIONAL INFORMATION

- The C version uses only standard C99 features and is compiled using `gcc -std=c99`
- The C++ version uses C++11 standards
- Code was tested using GCC on x86 Linux architecture
- Compatible with VS Code or terminal-based environments





