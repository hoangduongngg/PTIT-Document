#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int prime = a ; prime <= b; prime++)
    {
        int count = 0;
        for (int i = 1; i < prime ; i++)
        {
            if (prime % i == 0)
            {
                count++;
            }
        }
        if (count == 1 && prime > 1)
        {
            printf("%d\t", prime);
        }
    }
}
