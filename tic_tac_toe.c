#include <stdio.h>
#include <stdlib.h>
#include "header/play.h"
#include "header/choice.h"

int main()
{
    int n;
    printf("\n\n-----------------------\n*****Tic Tac Toe*****\n-----------------------\n\n");
    do
    {
        char num[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        printf("1.Play 1 V 1\n2.Play with Computer\n\nEnter Your Choice: ");
        scanf("%d", &n);
        printf("\n");
        while (n >= 3)
        {
            printf("~Please Enter valid option: ");
            scanf("%d", &n);
        }
        printf("\n******Player-1 is 'X'******\n");
        if (n == 1)
        {
            printf("******Player-2 is 'O'******\n\n");
        }
        else
        {
            printf("******Computer is 'O'******\n\n");
        }
        display_board(num);
        printf("\n\n****Press 'ENTER' to start the game****\n");
        fflush(stdin);
        if (getchar() != ' ')
        {
            fflush(stdin);
            display_board_p(num);
            play(num, n);
        }
    } while (choice() == 1);

    return 0;
}