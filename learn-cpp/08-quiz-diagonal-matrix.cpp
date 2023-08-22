#include <iostream>
using namespace std;

void printDiagonalMatrix(int size);

int main()
{
	/*
	 * The diagonal of the matrix should be filled with 0.
	 * The lower side should be filled will -1s.
	 * upper side should be filled with 1s.
	 */
	printDiagonalMatrix(5);
	return 0;
}

void printDiagonalMatrix(int size)
{
	int matrix[size][size];
	int value = 0;

	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			if (col == row)
			{
				value = 0;
			}
			else if (col < row)
			{
				value = -1;
			}
			else
			{
				value = 1;
			}
			matrix[row][col] = value;
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}
}
