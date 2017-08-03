/*Transpose a variable length matrix*/
#include <stdio.h>

void transpose(int rows, int cols, int matrixa[rows][cols], int matrixb[cols][rows])
{
	
	//store transposed matrix a into matrix b
	for (int row = 0; row < rows; ++row)
	{
		for (int col = 0; col < cols; ++col)
		{
			matrixb[col][row] = matrixa[row][col];
		}
	}
	
	//print transposed matrix
	printf("\nTransposed Matrix [%i][%i]:\n\n", cols, rows);

	for (int row = 0; row < cols; ++row)
	{
		for (int col = 0; col < rows; ++col)
		{
			printf("%5i", matrixb[row][col]);
			
		}
		printf("\n");
	}	
}

int main (void)
{
	
	int numRows, numCols;
	//Assign values to 4x5 matrix
	
	printf("Number of rows in the matrix: ");
	scanf("%i", &numRows);
	printf("Number of columns in the matrix: ");
	scanf("%i", &numCols);

	int matrix1[numRows][numCols], matrix2[numCols][numRows];
	
	printf("\nEnter values for the matrix: \n");
	for (int row = 0; row < numRows; ++row)
	{
		for (int col = 0; col < numCols; ++col)
		{
			printf("Matrix [%i][%i] = ", row, col);
			scanf("%i", &matrix1[row][col]);
		}
	}

	//print the original matrix
	printf("Original Matrix [%i][%i]:\n\n", numRows, numCols);

	for (int row = 0; row < numRows; ++row)
	{
		for (int col = 0; col < numCols; ++col)
		{
			printf("%5i", matrix1[row][col]);
			//printf("\n");
		}
		printf("\n");
	}	

	transpose(numRows, numCols, matrix1, matrix2);
}
