#include <stdio.h>
#include <string.h>

const char* Winner(const char player1[], const char player2[]) {

    if (strcmp(player1, "rock") != 0 && strcmp(player1, "paper") != 0 &&
        strcmp(player1, "scissors") != 0) {
        return "Invalid";
    }
    if (strcmp(player2, "rock") != 0 && strcmp(player2, "paper") != 0 &&
        strcmp(player2, "scissors") != 0) {
        return "Invalid";
    }
    if ((strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0) ||
        (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0) ||
        (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0)) {
        return "Player1";
    }
    else if ((strcmp(player1, player2) == 0)) {
        return "Draw";
    }
    else {
        return "Player2";
    }
}

int main(void) {
    printf("WELCOME TO ROCK PAPER SCISSORS\n");

  
    return 0;
}
