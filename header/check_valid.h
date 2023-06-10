#include <stdio.h>
#include "best_move.h"
int check_valid(char num[3][3], int t, int p)
{
    int r, c, in;
    static int i, cell;
    if (t == 9)
    {
        i = 9;
    }
    if ((i % 2 != 0) || p == 1)
    {
        scanf("%d", &cell);
    }
    else
    {
        cell = best_move(num, cell, i);
        printf("%d\n", cell);
    }
    r = (cell - 1) / 3;
    c = (cell - 1) % 3;
    while (((num[r][c] == 'X') || (num[r][c] == 'O')) || (cell <= 0 || cell >= 10))
    {
        printf("\n*****Invalid move*****\n");
        printf("Please enter valid move: ");
        scanf("%d", &cell);
        r = (cell - 1) / 3;
        c = (cell - 1) % 3;
    }
    if (p >= 2 && (i % 2 != 0))
    {
        rand_num(cell, i);
    }
    i--;
    return cell;
}