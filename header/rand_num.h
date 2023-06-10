#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int rand_num(int inv, int i)
{
    static int num, use[9];
    if (i == 9)
    {
        memset(use, 0, sizeof(use));
    }
    srand(time(0));
    if (i % 2 == 0)
    {
        do
        {
            num = rand() % 9 + 1;
        } while (use[num - 1]);
        use[num - 1] = 1;
    }
    else
    {
        use[inv - 1] = 1;
    }

    return num;
}