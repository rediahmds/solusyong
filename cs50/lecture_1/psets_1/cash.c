#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    return cents;
}

int calculate_quarters(int cents)
{
    int quarters_count = 0;
    for (int count = 1; count <= cents; count++)
    {
        if (count * 25 <= cents)
        {
            quarters_count = count;
        }
        else
        {
            break;
        }
    }

    return quarters_count;
}

int calculate_dimes(int cents)
{
    int dimes_count = 0;
    for (int count = 1; count <= cents; count++)
    {
        if (count * 10 <= cents)
        {
            dimes_count = count;
        }
        else
        {
            break;
        }
    }

    return dimes_count;
}

int calculate_nickels(int cents)
{
    int nickels_count = 0;
    for (int count = 1; count <= cents; count++)
    {
        if (count * 5 <= cents)
        {
            nickels_count = count;
        }
        else
        {
            break;
        }
    }

    return nickels_count;
}

int calculate_pennies(int cents)
{
    int pennies_count = 0;
    for (int count = 1; count <= cents; count++)
    {
        pennies_count = count;
    }

    return pennies_count;
}
