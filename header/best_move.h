
#include "rand_num.h"
int best_move(char num[3][3], int cell, int k)
{
    int i, j, pos;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (num[i][j] == ' ')
            {
                num[i][j] = 'O';
                if (check(num) == 1)
                {
                    num[i][j] = ' ';
                    rand_num(((i * 3 + j) + 1), 1);
                    return ((i * 3 + j) + 1);
                }
                num[i][j] = ' ';
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (num[i][j] == ' ')
            {
                num[i][j] = 'X';
                if (check(num) == 1)
                {
                    num[i][j] = ' ';
                    rand_num(((i * 3 + j) + 1), 1);
                    return ((i * 3 + j) + 1);
                }
                num[i][j] = ' ';
            }
        }
    }
    rand_num(cell, k);
}
