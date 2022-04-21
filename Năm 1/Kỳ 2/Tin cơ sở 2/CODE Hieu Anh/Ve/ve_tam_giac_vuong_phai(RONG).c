#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if(j>i)
            printf("~");
            else{
            	if(i>j && i<n && j > 1)
            	printf(".");
            	else
            printf("*");
            }
        }
        printf("\n");
    }
}
