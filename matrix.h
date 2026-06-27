#ifndef MATRIX_H
#define MATRIX_H

#define MAX 10

/* Global Matrices */

extern int A[MAX][MAX];
extern int B[MAX][MAX];
extern int Result[MAX][MAX];

/* Matrix Dimensions */

extern int rows1, cols1;
extern int rows2, cols2;

/* Input & Output */

void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols);

/* Basic Operations */

void addition();
void subtraction();
void multiplication();

/* Advanced Operations */

void transpose();
void traceMatrix();

int determinant(int matrix[MAX][MAX], int n);

void inverse();

/* Classification */

void classifyMatrix();

/* Export */

void exportResult();

/* Utility Functions */

void clearMatrix(int matrix[MAX][MAX], int rows, int cols);

void copyMatrix(int source[MAX][MAX],
                int destination[MAX][MAX],
                int rows,
                int cols);

void printLine();

#endif
