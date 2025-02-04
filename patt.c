#include <stdio.h>


int main()
{
    int i, j, k, rows;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (i % 2 != 0)
            {
                printf("^");
            }
            else if (i % 2 == 0)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

