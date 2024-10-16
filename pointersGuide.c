/*
Written by Dmorgs81 
Title: Pointers Applications
Purpose: To beter Understand Pointers and Experimentation
Class: CS 1050
*/


// 10/15/24 First Publish: Lines 12-103 


#include <stdio.h>

#define SIZE 10
#define ROWS 5
#define COLS 5

void basicPointers();
void pointersWithArrays();
void pointersWith2DArrays();
void multiplePointers();

int main(void) 
{
    basicPointers();
    pointersWithArrays();
    pointersWith2DArrays();
    multiplePointers();
    return 0;
}

//Basic Pointers
void basicPointers() 
{
    printf("\n\n---Basic Pointers---\n\n");
    int x = 5; // Declaring variable of type int x and setting it equal to 5
    int *pX = &x; // Pointer storing the address of x
    printf("int x is equal to: %d \n", *pX); // Print the value x is pointing to
    printf("The address of x in memory is: %p\n", (void*)&pX); // Print the address of x
    *pX = 56; // Change the value of x through pointer
    printf("The new value of x is equal to: %d\n", *pX); // Print the new value
}

//Pointers with 1D Arrays
void pointersWithArrays() 
{
    printf("\n\n---Pointers with Arrays---\n\n");
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declaring the array
    int *ptArray = arr; // Pointer to the array

    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]); // Print each element in the array
    }
    
    printf("\n"); // Space

    for (int i = 0; i < SIZE; i++) {
        printf("Address of ptArray[%d] = %p, Value = %d\n", 
               i, (void *)(ptArray + i), *(ptArray + i)); // Print addresses and values
    }
}


//Pointers with 2D Arrays
void pointersWith2DArrays() 
{
    printf("\n\n---Pointers with 2D Arrays---\n\n");
    int arr2[ROWS][COLS] = {
        {2, 4, 5, 6, 7},
        {2, 5, 6, 7, 1},
        {8, 6, 4, 3, 5},
        {5, 6, 3, 3, 2},
        {5, 4, 2, 3, 4}
    };

    // Printing the 2D Array
    for (int i = 0; i < ROWS; i++) {
        for (int z = 0; z < COLS; z++) {
            printf("ROW[%d], COL[%d] = %d \n", i, z, arr2[i][z]);
        }
    }

    printf("\n");

    // Printing the Addresses in the 2D Array
    for (int i = 0; i < ROWS; i++) {
        for (int z = 0; z < COLS; z++) {
            printf("Address of arr2[%d][%d] = %p \n", 
                   i, z, (void*)&arr2[i][z]); // Print addresses in the 2D array
        }
    }
}

void multiplePointers() 
{
    printf("\n\n---Multiple Pointers---\n\n");
    int myVariable = 10; // Regular Integer Variable
    int *ptmyVariable = &myVariable; // Single Pointer to myVariable
    int **dblptmyVariable = &ptmyVariable; // Double Pointer to ptmyVariable
    int ***trptmyVariable = &dblptmyVariable; // Triple Pointer to dblptmyVariable

    // Printing values and addresses
    printf("The value stored in myVariable is: %d\n", myVariable); // Use myVariable directly
    printf("The value accessed through ptmyVariable is: %d\n", *ptmyVariable); // Dereference single pointer
    printf("The value accessed through dblptmyVariable is: %d\n", **dblptmyVariable); // Dereference double pointer
    printf("The value accessed through trptmyVariable is: %d\n", ***trptmyVariable); // Dereference triple pointer

    printf("The location in memory of myVariable is: %p\n", (void*)&myVariable); // Address of myVariable
    printf("The location of ptmyVariable is: %p\n", (void*)&ptmyVariable); // Address of the pointer to myVariable (ptmyVariable)
    printf("The location of dblptmyVariable is: %p\n", (void*)&dblptmyVariable); // Address of the pointer to ptmyVariable (dblptmyVariable)
    printf("The location of trptmyVariable is: %p\n", (void*)&trptmyVariable);  // Address of the pointer to dblptmyVariable (trptmyVariable)

    printf("\n\n");
}


// I will add more to this later on...
