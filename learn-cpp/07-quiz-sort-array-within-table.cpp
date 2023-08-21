#include <iostream>
using namespace std;

void sortTable(int size);

int main()
{
	sortTable(5);
	return 0;
}

void sortTable(int size)
{
	int arr[size][size];
	int value = 1;

	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++, value++)
		{
			arr[row][col] = value;
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}