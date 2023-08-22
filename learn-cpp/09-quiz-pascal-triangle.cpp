#include <iostream>
using namespace std;

void printPascalTriangle(int size);

int main()
{
	printPascalTriangle(5);
	printf("\n");
	printPascalTriangle(10);
	return 0;
}

void printPascalTriangle(int size)
{

	int pascal[size][size];
	int value = 1;

	// col < row. Max to col == row.
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col <= row; col++)
		{
			if (col == 0 || row == 0 || row == 1 || row == col)
			{
				value = 1;
			}
			else
			{
				value = pascal[row - 1][col - 1] + pascal[row - 1][col];
			}
			pascal[row][col] = value;
			printf("%d ", value);
		}
		printf("\n");
	}
}