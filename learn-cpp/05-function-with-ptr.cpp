#include <iostream>
#include <cmath>
using namespace std;

void funcWithPtr(int *num);
void cubeifyNum(int *num);

int main()
{
	int myNum = 3;
	printf("Address of myNum is %d\n", &myNum);
	printf("  Value of myNum is %d\n", myNum);

	funcWithPtr(&myNum); // We should give an address as arg. See line 23
	cubeifyNum(&myNum);

	printf("Address of myNum is %d\n", &myNum);
	printf("  Value of myNum is %d\n", myNum);

	cin.get();
}

void funcWithPtr(int *num) // equals to: int *num = address of an object
{
	// Demonstrate function with pointer
	printf("From \'funcWithPtr\'\n");

	// num is storing 'myNum' memory address
	printf("   Address of \'num\' pointed to is %d\n", num);	// should be equal as object address
	printf(" The value of \'num\' pointed to is %d\n", *num); // should be equal as object value
	printf("              Address of \'num\' is %d\n", &num);

	/* Summary: this technique consumes yet another slot memory
	to contains the address of another variable, the pointer. 
 	The pointer itself also having its own memory address. */
}

void cubeifyNum(int *num)
{
	// Means that go to that address and replace the value
	*num = pow(*num, 3);
}
