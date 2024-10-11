#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randomizeArray(char grid[5][10])
{
    //declaring the array of possible nucleotides
    char nucleotides [] = {'A', 'T', 'G', 'C'};
    for(int i = 0; i < 5; i++)
    {
        for(int z = 0; z < 10; z++)
        {
            //chooses a random thing in the nucleotides array
            grid[i][z] = nucleotides[rand() % 4];
        }
    }
}

//function to print the array
void printArray(char grid[5][10])
{
    for (int i = 0; i < 5; i++)
    {
        for (int z = 0; z < 10; z++)
        {
            printf("%c ", grid[i][z]);
        }
        printf("\n");
    }
}

//calculate the similarity
void calculateSimilarity(char grid[5][10])
{
    printf("Enter the indices of the two sequences to compare (0 to 4): ");
    int number1 = 0;
    int number2 = 0;
    
    // Read the indices
    scanf("%d %d", &number1, &number2);

    // Now compare the sequences
    int similarity = 0;
    for (int i = 0; i < 10; i++)
    {
        if (grid[number1][i] == grid[number2][i])
        {
            similarity++;
        }
    }
    // Calculate similarity as a decimal
    float similarityDecimal = ((float)similarity / 10.0) * 100; // Total length of the sequence is 10

    // Print the result as a decimal
    printf("The similarity between sequence %d and sequence %d is: %.2f%% \n", number1, number2, similarityDecimal);
}

void mutateArray(char grid[5][10]) {
    int selection = 0;
    int numMutations = 0;

    //Ask for mutation
    printf("Enter the index of the sequence to mutate (0 to 4): ");
    scanf("%d", &selection);

    //How many mutations?
    printf("Enter the number of mutations (1 to 10): ");
    scanf("%d", &numMutations);

    char nucleotides[] = {'A', 'T', 'G', 'C'};

    // Perform the specified number of mutations
    for (int i = 0; i < numMutations; i++) {
        // Select a random position to mutate
        int position = rand() % 10;  // Random position in the sequence (0 to 9)

        // Mutate the nucleotide
        grid[selection][position] = nucleotides[rand() % 4];
    }

    // Display the mutated sequence
    printf("Sequence %d after mutation: ", selection);
    for (int i = 0; i < 10; i++) {
        printf("%c ", grid[selection][i]);
    }
    printf("\n");
}




int main(void)
{

    //Making a blank array to hold the sequences
    char grid[5][10];
    // Seed the random number generator with the current time
    srand(time(NULL));
    


    //randomize the elements in the array
    
    randomizeArray(grid);
    printArray(grid);

    printf("Choose an operation: \n 1. Calculate Similarity \n 2. Mutate Sequence \n 3. Exit \n Enter your choice: ");

    int choice = 0;
    scanf("%d", &choice);
    int off = 0; 
    while(off == 0)
    {
        switch(choice)
    {
        case 1:
        calculateSimilarity(grid);
        break;
        case 2:
        mutateArray(grid);
        case 3:
        break;
    } 

    }
    
}



