#include <stdio.h>

int main(void)
{
    int myArray[20];
    for(int i = 0; i <= 20; i++)
    {
        myArray[i] = i + 1;
    }
    
    for(int i = 0; i <= 20; i++)
    {
        printf("array[%d] = %d\n", myArray[i - 1], myArray[i]);
    }

    double total;
    double averageCalculation;
    
    for(int i = 0; i < 20.0; i++)
    {
        total += myArray[i];
    }
    printf("Toral of all Elements: %f \n", total);
    averageCalculation = total/20.0;
    printf("Average: %f \n", averageCalculation);
    return 0;
}
