#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getPlayerChoice();
int getComputerChoice();
void determineWinner(int player, int computer);


int main() {

    // ROCK PAPER SCISSORS Game: 

    srand(time(NULL));

    int player = getPlayerChoice();
    int computer = getComputerChoice();
    

    switch (player) {
        case 1:
            printf("You Choose Rock!\n");
            break;
        case 2:
            printf("You Choose Paper\n");
            break;
        case 3:
            printf("You Choose SCISSORS\n");
            break;
    }

    
    switch (computer) {
        case 1:
            printf("Computer Choose Rock!\n");
            break;
        case 2:
            printf("Computer Choose Paper\n");
            break;
        case 3:
            printf("Computer Choose SCISSORS\n");
            break;
    }

    determineWinner(player, computer);

    return 0;
}

int getPlayerChoice() {
    int choice = 0;

    do {

        printf("1. Rock\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("** Your choice **: ");

        scanf("%d", &choice);
        if (choice < 1 || choice > 3) {
            printf("Invalid Option! Try from 1 to 3.\n");
        }

        printf("\n");

    } while (choice < 1 || choice > 3);
    

    return choice;
}

int getComputerChoice() {
    return rand() % 3 + 1;
}

void determineWinner(int player, int computer) {
    if (player == computer) {
        printf("That's A tie");
    } 

    else if ( (player == 1 && computer == 3) ||
              (player == 2 && computer == 1) ||
              (player == 3 && computer == 2) ) {
    
                printf("You Win!");   
     } else {
        printf("You Lose!");
    }
}



