#include<stdio.h>
int main ()
{
	int a;
	scanf("%d", &a);
	int N = 1;
	int sotachra = 0;
	for (;a != 0;)
	{
		sotachra = a % 10;
		N *= sotachra;
		a /= 10;
	}
	printf("%d", N);
	
}
