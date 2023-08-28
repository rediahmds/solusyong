#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

// function to convert str to int using recursion
int convert(string input)
{
    // TODO
    int len = strlen(input);

    if (!len)
        return 0;

    int number = input[len - 1] - '0';
    input[len - 1] = '\0';

    return number + 10 * convert(input);
}