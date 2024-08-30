// Made by David Morgensztern
#include <stdio.h>

//Creating the main function
int main()
{
  //variable initation
   int A;
   int B;
   int C;
   int D;
  //Gathering input from the user
   printf("What is your A first number: ");
   scanf("%d", &A);
   printf("What is your B second number: ");
   scanf("%d", &B);
   printf("What is your C third number: ");
   scanf("%d", &C);
   printf("What is your D last number: ");
   scanf("%d", &D);
  //performing the calculations
   printf("A = %d\n", A);
   printf("B = %d\n", B);
   printf("C = %d\n", C);
   printf("D = %d\n", D);
   printf("B + C = %d\n", B + C);
   printf("A * D = %d\n", A * D);
   printf("A / C = %d\n", A / C);
   printf("C mod D = %d\n", C % D);
   printf("(A * C) / (B + D) = %d\n", (A * C) / (B + D));
  
  //returning 0 because function asks for an int
   return 0;
}




