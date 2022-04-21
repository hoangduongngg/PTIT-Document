#include <stdio.h>
int main ()
{
	int a, b;
        scanf("%d%d", &a, &b);
        if (b!=0)
        {
	int sum = a + b;
	    printf("\n%d",sum);
	int sub = a - b;
       	printf("\n%d", sub);
	int  mul = a * b;
		printf("\n%d",mul);
	float	div = a / (float)b;
		printf("\n%.2f", div);
	int mod = a % b;
		printf("\n%d",mod);
	}
		else
		{	
	printf("0");
}
	return 0;
	
}
