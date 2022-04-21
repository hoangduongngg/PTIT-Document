#include<stdio.h>
#define MAX 100

void Input(int a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
}

int Count(int a[], int n)
{
	int count=0;
	int i,j,dem;
    int check[100];
    for (i=1;i<=n;i++)
        check[i] = 0;
    for(i=1;i<=n;i++)
	{
     if (!check[i])
      {
        dem=1;
        for(j=1;j<=n;j++)
            if(a[i]==a[j] && i!=j) {
                dem++;
				check[j]=1;

            }
        if (dem > 1)
            count++;
      }
	}
     printf("%d\n", count);
}

//void Result(int a[], int n)
//{
//	int i, j, dem;
//	for(i=1; i<=n; i++)
//	{
//		dem=0;
//		for(j=1; j<=n; j++){
//			if(a[i]==a[j])
//			{
//				dem=1;
//			}
//		}
//		if(dem==1) printf("%d ", a[i]);
//	}
//}

void Result(int a[], int n)
{
    int i,j,dem;
    int check[100];
    for (i=1;i<=n;i++)
        check[i] = 0;
    for(i=1;i<=n;i++)
	{
     if (!check[i])
      {
        dem=1;
        for(j=1;j<=n;j++)
            if(a[i]==a[j] && i!=j) {
                dem++;
                check[j]=1;
            }
        if (dem > 1)
            printf("%d ",a[i]);
      }
    }

}
int main(){
	int a[MAX];
	int n;
	do
	{
		scanf("%d", &n);
	}while(n<3);
	
	Input(a,n);
	Count(a,n);
	Result(a,n);
}
