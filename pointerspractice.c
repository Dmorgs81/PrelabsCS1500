#include <stdio.h>
#define SIZE 20
#define ROWS 5
#define COLS 5

/* This code is mainly to practice with one of the most difficult things to understand in C programming which are pointers 
Pointers are basically the location in memory (address) of a variable within a program 
Pointers are denoted as * when declaring them
Example 

#include <stdio.h>

int main(void) 
{
    int x = 5;
    int *pX = &x;
    printf("Location of x: %p\n", (void*)pX); // Use %p to print addresses
    return 0;
*/


int main(void)
{
    int number = 20;
    int * pX = &number;
    printf("Address of number: %p\n ", (void*)&number); //Address of the number stored in int number
    printf("Address stored in pX: %p\n ", (void*)pX); //Address stored in pX
    printf("Value pointed to by pX: %d\n\n ", *pX); // Value pointed to by pX
    *pX = 30;
    printf("Value changed in the pointer: %d\n", *pX); //Changing the value of the point
    int **pY = &pX;
    printf("Value of the pointer of pX (address): %p\n", (void*)pY); // Print address of pX
    printf("Value pointed to by pY: %p\n", (void*)*pY); //  Address stored in pX
    printf("Value pointed to by the pointer of pX (number): %d\n\n", **pY); // value of number in pX
    int ***pZ = &pY;
    **pY = 40;
    printf("Value of the pointer of pY (address): %p\n", (void*)*pZ); //Print the address of pY
    printf("Value pointer to by pZ: %p\n", (void*)**pZ); //Address stored in pZ
    printf("Value pointer to by the pointer of pY (number): %d\n\n", ***pZ); //value of the number in pY
    int ****pQ = &pZ;
    ***pZ = 63;
    printf("Value of the pointer of pZ (address): %p\n", (void*)**pQ); //Print the address of pZ
    printf("Value pointer to by pQ: %p\n", (void*)***pQ); //Address stored in pQ
    printf("Value pointer to by the pointer of pQ (number): %d\n\n", ****pQ); //value of the number in pZ

    int arr[SIZE] = {1,2,5,6,78,88,26,45,52,23,44,51,12,195,107,49,38,25,34,41};
    int *ptrArray = arr;
        // Step 3: Accessing array elements using pointers
    printf("Using array syntax:\n\n");
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]); // Access using array syntax
    }
    printf("\n");

    printf("Using pointer syntax:\n\n");
    for (int i = 0; i < SIZE; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptrArray + i)); // Access using pointer syntax
    }
    
    int arr2[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 6, 7, 8, 10},
        {9, 10, 11, 12, 15},
        {9, 2, 4, 5, 6},
        {6, 4, 3, 1, 2}
    };

    printf("\n");

    // Accessing elements using array syntax
    printf("Using array syntax:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int x = 0; x < COLS; x++) {
            printf("arr2[%d][%d] = %d\n", i, x, arr2[i][x]);
        }
    }
    
    printf("\n");

    // Accessing elements using pointer syntax
    printf("Using pointer syntax:\n");
    int (*ptr)[5] = arr2; // Pointer to an array of 4 integers
    for (int i = 0; i < ROWS; i++) {
        for (int x = 0; x < COLS; x++) {
            printf("*(*(ptr + %d) + %d) = %d\n", i, x, *(*(ptr + i) + x));
        }
    }

    printf("\n");

    
    return 0;
}
