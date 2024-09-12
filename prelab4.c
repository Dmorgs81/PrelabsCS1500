#include <stdio.h>
#include <string.h>

int main (void){

     int num = 1;  

    for (int i = 0; i < 10; i++) 
    {
        printf("%d \n", num);
        num *= 3;
    }


    int choice;  // Variable for the user's riddle choice
    int attempts;
    char answer[50];  // Array for the user's answer
    int correctAnswer = 0;  

    printf("Choose a riddle (1, 2, or 3):\n");
    printf("1. Riddle 1\n");
    printf("2. Riddle 2\n");
    printf("3. Riddle 3\n");
    scanf("%d", &choice);  

    switch (choice) {
        case 1: 
            printf("Riddle 1: What has a head and a tail, but no legs? ");
            correctAnswer = 0;
            for (attempts = 1; attempts <= 3; attempts++) {
                printf("\nAttempt %d: ", attempts);
                scanf("%s", answer);

                if (strcmp(answer, "Coin") == 0 || strcmp(answer, "coin") == 0) {
                    correctAnswer = 1;
                    break;  // Exit the loop if correct
                } else {
                    printf("Wrong answer.");
                }
            }
            if (correctAnswer) {
                printf("\nCorrect! You solved the riddle.\n");
            } else {
                printf("\nOut of attempts. The correct answer was 'Coin'.\n");
            }
            break;

        case 2: 
            printf("Riddle 2: I am as light as a feather, yet no one can hold me for very long, what am I? ");
            correctAnswer = 0;
            for (attempts = 1; attempts <= 3; attempts++) {
                printf("\nAttempt %d: ", attempts);
                scanf("%s", answer);

                if (strcmp(answer, "Breath") == 0 || strcmp(answer, "breath") == 0) {
                    correctAnswer = 1;
                    break;
                } else {
                    printf("Wrong answer.");
                }
            }
            if (correctAnswer) {
                printf("\nCorrect! You solved the riddle.\n");
            } else {
                printf("\nOut of attempts. The correct answer was 'Breath'.\n");
            }
            break;

        case 3: 
            printf("Riddle 3: What is strong enough to break ships, but still fears the sun? ");
            correctAnswer = 0;
            for (attempts = 1; attempts <= 3; attempts++) {
                printf("\nAttempt %d: ", attempts);
                scanf("%s", answer);

                if (strcmp(answer, "Ice") == 0 || strcmp(answer, "ice") == 0) {
                    correctAnswer = 1;
                    break;
                } else {
                    printf("Wrong answer.");
                }
            }
            if (correctAnswer) {
                printf("\nCorrect! You solved the riddle.\n");
            } else {
                printf("\nOut of attempts. The correct answer was 'Ice'.\n");
            }
            break;

        default:
            printf("Invalid choice. Please choose between 1, 2, or 3.\n");
            return 1;
    }

    int numberTernery = 0;
    printf("Enter a number: ");
    scanf("%d", &numberTernery);  // Use &numberTernery for scanf
    (numberTernery % 2 == 0) ?
    printf("%d\n", numberTernery + 50) :
    printf("%d\n", numberTernery - 25);

    return 0;
}
