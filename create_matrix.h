#ifndef CREATE_MATRIX_H
#define CREATE_MATRIX_H

typedef struct{
	unsigned long n,m;
}MatrixSize;

typedef struct{
	MatrixSize size;
	float **matrix;
}Matrix;

void define_matrix(unsigned long n, unsigned long m, MatrixSize &mSize)

int create_matrix(int n, int m);

void fill_matrix();

void print_matrix();
