//David Morgensztern
//CS 1050
//Lab 8
//10/11/24


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5

// Displaying the Grid
void displayGrid(char grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int z = 0; z < COLS; z++) {
            if (grid[i][z] == 'X' || grid[i][z] == 'O') {
                printf("%c ", grid[i][z]);
            } else {
                printf("~ "); 
            }
        }
        printf("\n");
    }
}

// Initializing the grid with the ships
void makeArray(char grid[ROWS][COLS]) {
    char secondGrid[ROWS][COLS] = {
        {'~', '~', '~', '~', '~'},
        {'S', '~', '~', '~', 'S'},
        {'S', 'S', '~', '~', '~'},
        {'~', '~', '~', '~', '~'},
        {'~', 'S', '~', '~', '~'}
    };

    // Copying secondGrid to grid
    for (int i = 0; i < ROWS; i++) {
        for (int z = 0; z < COLS; z++) { //Chose the letter z because it's just a custom
            grid[i][z] = secondGrid[i][z];
        }
    }
}

// Function to update the grid if hit or miss
void updateGrid(char grid[ROWS][COLS], int row, int col, int hit) {
    int hits = 0;
    if (hit) {
        grid[row][col] = 'X'; // Mark as hit
        hits += 1;
    } else {
        grid[row][col] = 'O'; // Mark as miss
    }
    if(hits == 5)
    {
        printf("All ships have been hit! \n");
    }
}

// Function to check if the user's guess is a hit or miss
int checkHit(char grid[ROWS][COLS], int row, int col) {
    if (grid[row][col] == 'S') {
        return 1; // Hit
    } else if (grid[row][col] == '~' || grid[row][col] == 'O') {
        return 0; // Miss
    }
    return -1; //Checking to see if the user already hit the spot
} 

int main(void) {
    // blank array to hold the sequences
    char grid[ROWS][COLS];

    makeArray(grid);
    
    //Initial Grid
    printf("Welcome to Sink the Alien Ship!\n");
    printf("Initial Grid: \n");
    displayGrid(grid);

    //Mini Game LOOP
    int row, col;
    while (1) {
        printf("\nEnter your guess (row and column): ");
        scanf("%d %d", &row, &col);

        int result = checkHit(grid, row, col); //I Was going to add validation but I had limited time
        if (result == 1) {
            printf("Hit!\n");
            updateGrid(grid, row, col, 1); // HIT
        } else if (result == 0) {
            printf("Miss!\n");
            updateGrid(grid, row, col, 0); // MISS
        } else {
            printf("You've already hit this spot!\n");
        }

        //Updating the gird
        displayGrid(grid);
    }

    return 0;
}
