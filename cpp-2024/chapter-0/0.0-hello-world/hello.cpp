#include <iostream>
#include <limits>

int main()
{
	std::cout << "Hello World";

	// prevent program from closed immediately
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}