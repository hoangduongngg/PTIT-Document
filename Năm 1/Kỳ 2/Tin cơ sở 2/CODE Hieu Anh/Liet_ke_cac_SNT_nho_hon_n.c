#include<stdio.h>
int main (){
	int a;
	scanf("%d", &a);
	for (int n = 2; n < a ; ++n){
		int count = 0;
		for (int i = 2; i <= n ;i++){
			if (n % i == 0) count++;
		}
			if (count < 2 ) printf("%d\t", n);
			else {};
		}
	}

