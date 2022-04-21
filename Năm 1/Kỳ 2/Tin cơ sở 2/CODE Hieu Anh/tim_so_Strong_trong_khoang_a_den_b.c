#include<stdio.h>
int gt(int t)
{
    int tan=1;
    for(int i=1;i<=t;i++)
    {
        tan*=i;
    }
    return tan;
}
int main()
{
    int a,b,sum=0,dem=0;
    scanf("%d%d", &a, &b);
    if(a>b){
    	int temp=a;
    	a=b;
    	b=temp;
    }
    for(int n=a;n<=b;n++)
    {
    	int sum=0;
        int k=n;
        while(k>0)
        {
            sum+=gt(k%10);
            k/=10;
        }
        if(sum==n)
        {
            printf("%d ",n);
        }
    }
}
