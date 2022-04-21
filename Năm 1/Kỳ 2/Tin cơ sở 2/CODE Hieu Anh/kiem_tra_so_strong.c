#include<stdio.h>

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
    return sum;
}

int Check(int n){
	if(Sum(n)==n) printf("1");
	else printf("0");
}

int main(){
	int n;
	scanf("%d", &n);

	Check(n);
}
