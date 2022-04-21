#include<stdio.h>
#define MAX 100

void Input(int a[], int n)
{
	for(int i=1; i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
}

void Count(int a[], int n)
{
int i,j,dem;
    int count=0;
    //dem
   for(i=1;i<=n;i++)
    {
     dem =0;
      for(j=1;j<=n;j++)
       {
         if(a[i]==a[j]&&i!=j)
             dem =1;
       }
       if(dem==0)
       {
          count++;
      }
    }
    printf("%d\n", count);
}
int Result(int a[], int n)
{
    int i,j,dem;
    // liet ke
    for(i=1;i<=n;i++)
    {
       dem =0;
       for(j=1;j<=n;j++)
       {
           if(a[i]==a[j]&&i!=j)
              dem =1;
       }
       if(dem==0)
       {
           printf("%d ", a[i]);
       }
    
    }
}

int main(){
	int a[MAX];
	int n;
	do
	{
		scanf("%d", &n);
	}while(n<2);
	
	Input(a,n);
	Count(a,n);
	Result(a,n);
}
