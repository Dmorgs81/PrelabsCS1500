#include <stdio.h>
#define SIZE 16

void functionpointer(int *p1, int *p2, int *p3)
{
    // Print the addresses of the variables p1, p2, p3 point to
    *p1 = 34;
    *p3 = 5;
    *p2 = 67;
    printf("The value stored in p1 is: %d \n", *p1);
    printf("The value stored in p2 is: %d \n", *p2);
    printf("The value stored in p3 is: %d \n", *p3);
    printf("The address of p1 = %p\n", (void*)p1);
    printf("The address of p2 = %p\n", (void*)p2);
    printf("The address of p3 = %p\n", (void*)p3);
}

int main(void) 
{
    int variableI = 59;                     // Regular integer
    int *pointerI = &variableI;             // Single pointer to variableI
    int **dblpointerI = &pointerI;          // Double pointer to pointerI
    int ***trplpointerI = &dblpointerI;     // Triple pointer to dblpointerI

    printf("\nPointers of Pointers Practice ------ \n");
    printf("Value stored in variableI is: %d\n", variableI); // Directly print the variable
    printf("Location of variableI (value of pointerI): %p\n", (void*)pointerI);
    printf("The location of pointerI is: %p, which is stored in dblpointerI located at: %p\n", (void*)&pointerI, (void*)&dblpointerI);
    printf("The location of trplpointerI is: %p, which is stored in dblpointerI located at: %p, which is stored in pointerI located at: %p\n", (void*)trplpointerI, (void*)dblpointerI, (void*)pointerI);
    int num1 = 10, num2 = 20, num3 = 30; // Initialize the variables
    float var4 = 0;
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10,45,12,34,5,3,1};

    // Calculate average of the array
    for(int i = 0; i < SIZE; i++)
    {
        var4 += arr[i];
    }
    var4 = var4 / SIZE;

    int var1 = 20, var2 = 30, total = 0, totalptr = 0;
    float var3 = 3.2;

    // Indirectly Using Pointers
    total = var1 + var2; 
    int *ptr1 = &var1, *ptr2 = &var2;
    float *ptr3 = &var3;
    float *ptr4 = &var4;
    totalptr = *ptr1 + *ptr2;

    printf("The value of the total: %d \n", total); // prints 50
    printf("The value of the total pointers: %d \n", totalptr); // prints 50

    // Print addresses of pointers
    printf("The value of pointer ptr1 is: %p \n", (void*)ptr1);
    printf("The value of pointer ptr2 is: %p \n", (void*)ptr2);
    printf("The value of pointer ptr3 is: %p \n", (void*)ptr3);
    printf("The value of pointer ptr4 is: %p \n", (void*)ptr4);

    // Print values pointed to by pointers
    printf("The value stored in the pointer ptr1 is: %d \n", *ptr1);
    printf("The value stored in the pointer ptr2 is: %d \n", *ptr2);
    printf("The value stored in the pointer ptr3 is: %f \n", *ptr3);
    printf("The value stored in the pointer ptr4 is: %f \n", *ptr4);

    // Call functionpointer
    functionpointer(&num1, &num2, &num3);

    return 0;
}
