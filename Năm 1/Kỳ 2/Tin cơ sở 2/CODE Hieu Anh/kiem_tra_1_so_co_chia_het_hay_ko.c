#include <stdio.h>
int main ()
{
int a, b, c;
scanf("%d%d%d", &a, &b ,&c);
if (a % b == 0 && a % c == 0)
{
printf("1", a);
}
else 
printf("0");
}
