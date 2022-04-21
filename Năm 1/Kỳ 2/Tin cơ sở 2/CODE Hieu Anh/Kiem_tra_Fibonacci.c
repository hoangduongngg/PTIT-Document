#include<stdio.h>
int Fibonacci(int n){
	int a1 = 1, a2 = 1, a3 = 0;
	while(a1 + a2 <= n){
	a3 = a1 + a2;
	a1 = a2;
	a2 = a3;
}

if(a3 == n) printf("1");
else printf("0");
}
int main(){
	int n;
	scanf("%d", &n);
	if(n==1 || n==2 ){
		printf("1");
	}
	else{
	Fibonacci(n);
}
	}
