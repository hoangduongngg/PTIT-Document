#include<stdio.h>
int CountDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}
 
int IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; 
        tmp /= 10;       
        sum += pow(last, numDigit);
    }
    if (sum == n) printf("1");
    else          printf("0");
}
 
int main()
{
    int n;
    scanf("%d", &n);
}
