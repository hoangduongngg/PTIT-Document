#include<stdio.h>
#define MAX 100

void Input(int a[], int n)
{
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
}

void Count(int a[], int n)
{
	int i,j,count=1,dem;
	int check[100];
    for (i=1;i<=n;i++)
        check[i] = 0;
	for(i=1; i<=n; i++)
	{
		count=1;
		if (!check[i])
		{
		for(j=1; j<=n; j++)
		{
			if(a[i]==a[j] && i!=j)
			{
				count++;
				check[j]=1;

			}
		}
		
		printf("%d %d", a[i], count);
		printf("\n");
		
	}
}
}

int main()
{
	int a[MAX];
	int n;
	do
	{
		scanf("%d", &n);
	}while(n<2);
	
	Input(a,n);
	Count(a,n);
}
