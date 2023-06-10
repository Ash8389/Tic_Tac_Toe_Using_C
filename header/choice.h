#include <stdio.h>

int choice()
{
    int n;
    printf("\n1. Play again\n2. Exit\n\nEnter your choice: ");
    scanf("%d", &n);
    printf("\n");
    while (n != 1 && n != 2)
    {
        printf("~Please Enter valid option: ");
        scanf("%d", &n);
    }
    return n;
}