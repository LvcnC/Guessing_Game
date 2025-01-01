#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // to use booleans, otherwise i'd have to use an integer, 1 == true, 0 == false
#include <time.h>
#include "IsNumber.c"

// GUESSING GAME!

struct Player {
    int lives;
    bool HasWon;
};

int main()
{
    // rand() creates a random number
    srand(time(NULL)); // this create a random seed everytime, otherwise rand() would pick the same randomized number
    // time null is because it needs to be spit out as soon as possible
    int randomNumber = rand() % 10 + 1;
    // out of 10(with 10 excluded)
    int num = 0;

    struct Player player1;
    player1.lives = 3;

    printf("The secret number is between 1 and 10\n");

    while (num != randomNumber && player1.lives > 0){

        printf("\nLives left: %d\n", player1.lives);
        char answer[20];
        printf("Guess a secret number: ");
        scanf("%s", answer);
  
  // if the string answer contains a number
        if(IsNumber(answer) == 0){

            num = atoi(answer); // turn the "stringed"number into an actual number

            if (num <= 0 || num > 10){
                printf("The secret number is between 1 and 10\n");
            }else if (num == randomNumber){
                printf("You guessed, the secret number is %d\n", num);
                player1.HasWon = true;
            } else if (num < randomNumber){
                printf("The secret number is higher!\n");
                player1.lives--;
            } else {
                printf("The secret number is lower!\n");
                player1.lives--;
            } 
        } 
        else {
            printf("\"%s\" is invalid\n", answer);
        }
     }
     // as long as you dont guess correctlty and your lives are above 0, continue
    if(player1.lives == 0){
        printf("\nYou lost!! The secret number was %d", randomNumber);
        player1.HasWon = false; // or HasWon = 0; 0 == false, 1 == true
    }
    return 0;
}
