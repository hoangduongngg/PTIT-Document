#include<stdio.h>
#define MAX 100

void Input(int a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void GetMax(int a[], int n)
{
	int i, max=0;
	for(i=1; i<=n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	printf("%d ", max);
}

void GetPosition1(int a[], int n)
{
	int i, max=0, index;
	for(i=1; i<=n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			index = i;
		}
	}
	printf("%d", index);
}

void GetMin(int a[], int n)
{
	int i, min=a[1];
	for(i=1; i<=n; i++)
	{
		if(min >= a[i])
		{
			min = a[i];
		}
	}
	printf("%d ", min);
}

void GetPosition2(int a[], int n)
{
	int i, min=a[1], index;
	for(i=1; i<=n; i++)
	{
		if(min >= a[i])
		{
			min = a[i];
			index = i;
		}
	}
	printf("%d", index);
}

int main()
{
	int a[MAX];
	int n;
	do
	{
		scanf("%d", &n);
	}while(n<3);
	
	Input(a,n);
	//Tim Max:
	GetMax(a,n);
	GetPosition1(a,n);
	printf("\n");
	GetMin(a,n);
	GetPosition2(a,n);
}
