#include <stdio.h>
#include "check.h"
#include "display.h"
#include "check_valid.h"

void play(char num[3][3], int p)
{
    int n, r, c, cell, t = 9;

    while (t != 0)
    {
        printf("\n\nPLAYER-1 Enter No.: ");

        cell = check_valid(num, t, p);
        r = (cell - 1) / 3;
        c = (cell - 1) % 3;
        num[r][c] = 'X';
        display_board_p(num);
        n = check(num);
        if (n == 1)
        {
            printf("\n******PLAYER-1 WIN THE GAME******\n");
            return;
        }
        t--;

        if (t == 0)
        {
            printf("\n******GAME DRAW******\n");
            return;
        }
        if (p == 1)
        {
            printf("\n\nPLAYER-2 Enter No.: ");
            cell = check_valid(num, t, p);

            r = (cell - 1) / 3;
            c = (cell - 1) % 3;
            num[r][c] = 'O';
            display_board_p(num);
            n = check(num);
            if (n == 1)
            {
                printf("\n******PLAYER-2 WIN THE GAME******\n");
                return;
            }
        }
        else
        {
            printf("\n\nCOMPUTER Enter No.: ");
            cell = check_valid(num, t, p);

            r = (cell - 1) / 3;
            c = (cell - 1) % 3;
            num[r][c] = 'O';
            display_board_p(num);
            n = check(num);
            if (n == 1)
            {
                printf("\n******COMPUTER WIN THE GAME******\n");
                return;
            }
        }
        t--;
    }
}