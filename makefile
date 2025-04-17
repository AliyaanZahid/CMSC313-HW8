# Makefile for building C++ and C matrix libraries

all: matrix_cpp matrix_c

# Build the C++ version
matrix_cpp: main.cpp Matrix.cpp Matrix.hpp
	g++ -std=c++11 main.cpp Matrix.cpp -o matrix_cpp

# Build the C version
matrix_c: main.c matrix.c matrix.h
	gcc -std=c99 main.c matrix.c -o matrix_c

# Clean up compiled binaries
clean:
	rm -f matrix_cpp matrix_c
