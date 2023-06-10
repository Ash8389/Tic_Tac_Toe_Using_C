#include <stdio.h>
void display_board(char num[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %c ", num[i][j]);
            num[i][j] = ' ';
            if (j != 2)
                printf("|");
        }
        if (i != 2)
        {
            printf("\n-----------\n");
        }
    }
}

void display_board_p(char num[3][3])
{
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %c ", num[i][j]);
            if (j != 2)
                printf("|");
        }
        if (i != 2)
        {
            printf("\n-----------\n");
        }
    }
}
