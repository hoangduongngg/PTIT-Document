#include<stdio.h>
#define MAX 100

void Input(int a[], int n)
{
	for(int i=1; i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
}
int Result(int a[], int n)
{
    int i,j,dem;  
    // liet ke
    for(i=1;i<=n;i++)
    {
       dem =0;
       for(j=i;j>0;j--)
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
	Result(a,n);
	if()
}
