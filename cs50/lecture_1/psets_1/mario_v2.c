#include <cs50.h>
#include <stdio.h>

void print_pyramid(int);
void print_rightTriangle(int);
void print_spaces(int, int);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height == 9);

    print_pyramid(height);
}

void print_pyramid(int height)
{
    for (int row = 1; row <= height; row++)
    {
        // print spaces
        print_spaces(height, row);

        // print hash symbols (first right triangle): "/_|"
        print_rightTriangle(row);

        // print gap
        printf("  ");

        // print hash symbols (second right triangle): "|_\"
        print_rightTriangle(row);

        printf("\n");
    }
}

void print_rightTriangle(int row)
{
    for (int hash = 1; hash <= row; hash++)
    {
        printf("#");
    }
}

void print_spaces(int height, int row)
{
    for (int space = 1; space <= (height - row); space++)
    {
        printf(" ");
    }