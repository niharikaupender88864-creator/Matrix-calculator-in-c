#ifndef MATRIX_H
#define MATRIX_H

/* Matrix Arithmetic Operations */
void addition();
void subtraction();
void multiplication();

/* Matrix Operations */
void transpose();
void determinant();
void inverse();

/* Matrix Classification */
void classify();

/* Export Result */
void exportResult();

/* Input and Output Functions */
void inputMatrix(int matrix[10][10], int rows, int cols);
void displayMatrix(int matrix[10][10], int rows, int cols);

/* Utility Functions */
void printLine();
void printTitle(char title[]);

#endif
