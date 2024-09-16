#include <stdio.h>
#include <math.h>


//calling the recursive function
double factorialRecursiveCalculation(int n);
int main(void) {
    //initializing the variable as a double
    double factorialCalc = 1.0;
    
    //for loop that starts at 1 because 1/0! is 1 and that's already initialized in the variable
    for(int i = 1; i < 15; i++) {
        factorialCalc += 1.0/factorialRecursiveCalculation(i); //calls the recursive function and adds it to 1/i!
    }

    //prints e and the different calculations
    printf("e = %f \n", factorialCalc);
    /* printf("e^1 = %f \n", pow(factorialCalc, 1));
    printf("e^2 = %f \n", pow(factorialCalc, 2));
    printf("e^3 = %f \n", pow(factorialCalc, 3));
    printf("e^4 = %f \n", pow(factorialCalc, 4));
    printf("e^5 = %f \n", pow(factorialCalc, 5)); */

    for(int z = 1; z <= 5; z++)
        {
            printf("e^%d = %f\n", z, pow(factorialCalc, z));
        }
    return 0;  
}


//recursive function for calculating the factorials
double factorialRecursiveCalculation(int n) {
    if (n == 0 || n == 1) 
    {
        return 1;  
    } 
    else 
    {
        return n * factorialRecursiveCalculation(n - 1); //calculates based off the factorial formula 
    }
}
