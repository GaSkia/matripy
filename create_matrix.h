#ifndef CREATE_MATRIX_H
#define CREATE_MATRIX_H

typedef enum{
	int n,m;
}m_size;

typedef struct{
	m_size size;
	float **matrix;
}matrix;

void define_matrix()

int create_matrix(int n, int m);

void fill_matrix();


