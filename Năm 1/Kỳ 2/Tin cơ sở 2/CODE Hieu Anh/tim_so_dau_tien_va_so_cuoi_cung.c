#include<stdio.h>
int main ()
{
	int a;
	scanf("%d", &a);
	int socuoicung = 0;

	socuoicung += a % 10;
	 int H = a;
    for (;H > 9;)
    {
        H /= 10;
    }

	printf("%d\t", H);
		printf("%d", socuoicung);
return 0;
}
