#include <stdio.h>
int main()
{
int a, b, c;
scanf("%d%d%d", &a, &b, &c);
if (a == b && a == c && b ==c)
{
	printf("3", a, b, c);
}
else if (a == b && a + b > c || a == c && a + c > b || c == b && c + b > a)
{
printf("2", a, b, c);
}
else if ( a  *a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
{
	printf("1", a, b, c);
	
}
}

