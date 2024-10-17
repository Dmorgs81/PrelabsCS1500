//David Morgensztern
//Lab 6
//9/27/24
//CS 1050

#include <stdio.h>

int main(void)
{
    int evens[50]; // Array for even numbers
    int odds[50];  // Array for odd numbers
    int index = 0; // Index for even numbers
    int oddindex = 0; // Index for odd numbers

    // Array of all even numbers 102 to 200
    for(int i = 102; i <= 200; i++)
    {
        if(i % 2 == 0)
        {
            evens[index] = i;
            index++; 
        }
    }

    // Array of all odd numbers 201 to 299
    for(int z = 201; z <= 299; z++)
    {
        if(z % 2 != 0)
        {
            odds[oddindex] = z;
            oddindex++; 
        }
    }

    // Print the even numbers
    for(int i = 0; i < 50; i++)
    {
        printf("evens[%d] = %d\n", i, evens[i]);
    }

    // Calculate and print the total and average for even numbers
    int totalevens = 0;
    for(int i = 0; i < 50; i++)
    {
        totalevens += evens[i];
    }
    printf("Total of all Even Elements: %d\n", totalevens);

    double averageCalculationEvens = (double)totalevens / 50;  // Cast to double for correct division
    printf("Average Evens: %.2f\n", averageCalculationEvens);

    // Print the odd numbers
    for(int i = 0; i < 50; i++)
    {
        printf("odds[%d] = %d\n", i, odds[i]);
    }

    // Calculate and print the total and average for odd numbers
    int totalodds = 0;
    for(int i = 0; i < 50; i++)
    {
        totalodds += odds[i];
    }
    printf("Total of all Odd Elements: %d\n", totalodds);

    double averageCalculationOdds = (double)totalodds / 50;  
    printf("Average Odds: %.2f\n", averageCalculationOdds);

    // Multiply the evens and odd arrays 
    for(int i = 0; i < 50; i++)
    {
        printf("odds[%d] * evens[%d] = %d\n", odds[49-i], evens[i], odds[49-i] * evens[i]);
    }

    return 0;
}
