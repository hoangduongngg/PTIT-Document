#include<stdio.h>
#include<stdbool.h>
int Sum(int n){
	int last;
	int  sum=0;
	int temp=n;

	while(temp>0){
		int giaithua=1;
		last = temp % 10;
        for(int i =1;i<=last;i++){
        	giaithua *= i;
        }
        sum += giaithua;
		temp /= 10; 
	}
   if(Sum(n)==n) return true;
	else return false;
}

int Check(int n){
	for(int i=1;i<=n;i++){
		if(Sum(i)==true) printf("%d", i);
	}
}

int main(){
	int n;
	scanf("%d%d", &a,&b);

	Check(a,b);
}
