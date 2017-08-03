/*Transpose matrix[4][5] into matrix[5][4]*/
#include <stdio.h>

void transpose(int matrixa[4][5], int matrixb[5][4])
{
	
	//store transposed matrix a into matrix b
	for (int row = 0; row < 4; ++row)
	{
		for (int col = 0; col < 5; ++col)
		{
			matrixb[col][row] = matrixa[row][col];
		}
	}
	
	//print transposed matrix
	printf("\nTransposed Matrix [5][4]:\n\n");

	for (int row = 0; row < 5; ++row)
	{
		for (int col = 0; col < 4; ++col)
		{
			printf("%5i", matrixb[row][col]);
			
		}
		printf("\n");
	}	
}

int main (void)
{
	//Assign values to 4x5 matrix
	int matrix1[4][5] = 
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};
	int matrix2[5][4];

	//print the original matrix
	printf("Original Matrix [4][5]:\n\n");

	for (int row = 0; row < 4; ++row)
	{
		for (int col = 0; col < 5; ++col)
		{
			printf("%5i", matrix1[row][col]);
			//printf("\n");
		}
		printf("\n");
	}	

	transpose(matrix1, matrix2);
}
