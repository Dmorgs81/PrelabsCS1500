#include <stdio.h>

#define COLS 3  // Define number of columns
#define ROWS 12 // Define number of rows

// Function to calculate and return the average of a specific row
float PrintRowAverage(int array[][COLS], int whichrow)
{
    float sum = 0.0;
    for (int j = 0; j < COLS; j++)  // Loop through the columns of the given row
    {
        sum += array[whichrow][j];  // Add the elements in the row
    }
    return sum / COLS;  // Return the average of the row
}

// Function to calculate and return the average of a specific column
float PrintColAverage(int array[][COLS], int whichcol)
{
    float sumCol = 0.0;
    for (int i = 0; i < ROWS; i++)  // Loop through all rows in the specific column
    {
        sumCol += array[i][whichcol];  // Add the elements in the column
    }
    return sumCol / ROWS;  // Return the average of the column
}

void Print2DArray(int array[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        printf("Row %d: ", i);
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int matrix[ROWS][COLS] = {
        {72, 68, 62},   // Row 0
        {95, 88, 95},   // Row 1
        {93, 97, 86},   // Row 2
        {98, 77, 98},   // Row 3
        {99, 92, 90},   // Row 4
        {47, 32, 27},   // Row 5
        {97, 99, 85},   // Row 6
        {85, 95, 91},   // Row 7
        {96, 91, 99},   // Row 8
        {94, 90, 85},   // Row 9
        {98, 98, 90},   // Row 10
        {76, 82, 98}    // Row 11
    };

    // Calling function to print the matrix
    Print2DArray(matrix, ROWS);

    // Print the average of each row
    for (int i = 0; i < ROWS; i++)
    {
        float rowAverage = PrintRowAverage(matrix, i);
        printf("Average of row %d: %.2f\n", i, rowAverage);
    }

    // Print the average of each column
    for (int j = 0; j < COLS; j++)
    {
        float colAverage = PrintColAverage(matrix, j);
        printf("Average of column %d: %.2f\n", j, colAverage);
    }

    return 0;
}
