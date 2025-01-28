#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int game(char you,char computer) {
    if (you == computer)
        return -1;
    if ( you == 's' && computer == 'p') {
        return 0;
    }
    else if (you == 'p' && computer == 's') {
        return 1;
    }
    if (you == 's' && computer == 'z') {
        return 1;
    }
    else if (you == 'z' && computer == 's') {
        return 0;
    }
    if (you == 'z' && computer == 'p') {
        return 1;
    }
    else if (you == 'p' && computer == 'z')
        return 0;
}

    int main() {
        int n;
        char sen,pc;
        char result;

    srand(time(NULL));
    n = rand() % 100;
        if (n<33) {
            pc ='s';
        }
        else if (n > 33 && n < 66){
            pc ='p';
        }
        else {
            pc ='z';
        }

        printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("%c",&sen);
        result = game(sen,pc);
        if (result == -1) {
            printf("\n\n\t\t\t Game draw !");
        }
        else if (result == 1) {
            printf("\n\n\t\t\t You have won the game !");
        }
        else{
            printf("\n\n\t\t\t You have lost the game !");
        }
    printf("\t\t\tYou choose : %c and computer choose : %c ",sen,pc);


        return 0;
    }

