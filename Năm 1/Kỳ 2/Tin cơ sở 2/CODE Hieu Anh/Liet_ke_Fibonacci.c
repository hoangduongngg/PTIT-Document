#include<stdio.h>
#include<conio.h>

int Fibonacci(int n){
		int a1 = 0, a2 = 1, a3 = 0, i;

		printf("%d %d", a1, a2);
		
		for(i = 2;i < n;i++){
		a3 = a1 + a2;
		printf(" %d", a3);
		a1 = a2;
		a2 = a3;
	}
}
int main(){
	int n;
		scanf("%d", &n);
		Fibonacci(n);
}
