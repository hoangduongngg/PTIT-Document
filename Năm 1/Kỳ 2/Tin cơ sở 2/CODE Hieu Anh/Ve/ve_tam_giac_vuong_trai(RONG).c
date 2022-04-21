#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // ha`ng
    {
        for (j = 1; j <= n; j++)
        {
            if(j>1 && i>j && i<n)
                printf(".");
            else if(i>=j)
                printf("*");
        }
        printf("\n");
    }
}
