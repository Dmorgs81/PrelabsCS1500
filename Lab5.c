//David Morgensztern
//Lab 5


#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n);

int main(void) 
{

    // Loop through numbers from 2 to 99 (I dont know if I should skip 0 and 1 but I did so anyways)
    for(int i = 2; i < 100; i++)
    {
        if(isPrime(i)) 
        { 
            printf("%d ", i); 
        }
    }
    
    printf("\n");
    return 0;
}

// Function for checking if somehting is prime
int isPrime(int n)
{
    if (n <= 1) 
    {
        return 0; // Note that Numbers less than or equal to 1 are not prime
    }
    
    //Checking divisibility
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) 
        {
            return 0; // Checks to see if it's divisible by a number
        }
    }

    return 1; // If there's nothing divisible than the function is prime
}
