#include<stdio.h>
int main ()
{
	int a;
	scanf("%d", &a);
	int count = 0;
	int sotachra = 0;
	for (;a != 0;)
	{
		sotachra = a % 10;
		count++;
		a /= 10;
	}
	printf("%d", count);
	
}
