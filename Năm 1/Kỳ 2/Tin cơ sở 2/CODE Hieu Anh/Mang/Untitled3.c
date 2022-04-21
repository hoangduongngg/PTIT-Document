#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void In(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

bool check(int n){
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int Count(int a[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(check (a[i])==true)
            count++;
    }
    return count;
}

void Out(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        if(check(a[i])==true)
            printf(" %d", a[i]);
    }
}

int main()
{
    int a[100];
    int n;
    do
    {
        scanf("%d", &n);
    } while (n <= 1);
    
    In(a,n);
    printf("%d", Count(a,n));
    Out(a,n);
}
