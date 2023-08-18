#include <iostream>
using namespace std;

int *sortAsc(int *arr, int size);

int main()
{
	/* code */
	return 0;
}

int *sortAsc(int *arr, int size)
{
	/*
	 *	Write a C++ function called sortAsc to sort an array of ten integer values in ascending order.
	 *
	 *	The function sortAsc will accept two arguments
	 *
	 *	First, a pointer that points to the array.
	 *	Second, the array size.
	 *	Fucntion Return
	 *
	 *	The function sortAsc returns a pointer that points to the sorted array​.
	 */

	for (int index = 0; index < size - 1; index++)
	{
		int *currentSmallest = &arr[index]; // set pointer to point current index temporarily
		for (int compareIndex = index + 1; compareIndex < size; compareIndex++)
		{
			if (arr[compareIndex] < *currentSmallest)
			{
				currentSmallest = &arr[compareIndex];
			}
		}
		int temp = arr[index];				 // assign current unsorted element
		arr[index] = *currentSmallest; // replace the element with sorted ones
		*currentSmallest = temp;			 // specific unsorted element will be compared in next iteration
	}

	return arr;
}
