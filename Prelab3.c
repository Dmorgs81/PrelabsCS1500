#include <stdio.h>

int main(void)
{
    int iterations = 1; 
    while(iterations < 51)
    {
        if(iterations % 3 == 0 && iterations % 5 == 0)
        {
            printf("Fizz Buzz ");
        }
        else if(iterations % 3 == 0)
        {
            printf("Fizz ");
        }
        else if(iterations % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", iterations);
        }
        
        iterations++;
    }
    return 0;
}
