#include <iostream>
using namespace std;

void printBoard(int **boardArr, int rowSize, int columnSize);
void makeBoard(int rowSize, int columnSize);

int main(int argc, char const *argv[])
{
	makeBoard(7, 4);

	cin.get();
	return 0;
}

void printBoard(int **boardArr, int rowSize, int columnSize)
{
	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < columnSize; col++)
		{
			printf("%d ", boardArr[row][col]);
		}
		printf("\n");
	}
}

void makeBoard(int rowSize, int columnSize)
{
	int **board = new int *[rowSize];

	for (int row = 0; row < rowSize; row++)
	{
		board[row] = new int[columnSize];
		for (int col = 0; col < columnSize; col++)
		{
			board[row][col] = 1;
		}
	}

	printBoard(board, rowSize, columnSize);

	for (int row = 0; row < rowSize; row++)
	{
		delete[] board[row];
	}

	delete[] board;
}