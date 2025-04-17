# Matrix Library in C and C++

## AUTHORING
Mohammad Aliyaan Zahid  
UMBC – CMSC313: Computer Organization & Assembly Language  
Spring 2025 – Monday/Wednesday 2:30PM Section

---

## PURPOSE OF SOFTWARE

This project implements a matrix library in both C++ and C to perform basic matrix operations including addition, scalar multiplication, matrix multiplication, and transposition. The objective is to evaluate the matrix expression:

D = A + (3 * B) × Cᵗ

Where:
- A is a 2x2 matrix
- B is a 2x3 matrix
- C is a 2x3 matrix
- Cᵗ is the transpose of C (3x2)

The output D is a 2x2 matrix.

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





