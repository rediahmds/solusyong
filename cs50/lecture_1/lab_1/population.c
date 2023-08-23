#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int minimum_population = 9;

    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < minimum_population);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int born;
    int passaway;
    int years = 0, population = start_size;
    do
    {
        if (start_size == end_size)
        {
            break;
        }
        born = population / 3;
        passaway = population / 4;
        population += (born - passaway);
        years++;
    }
    while (population < end_size);

    // Refactor: Create function for sake of readability

    // TODO: Print number of years
    printf("Years: %i", years);
}
