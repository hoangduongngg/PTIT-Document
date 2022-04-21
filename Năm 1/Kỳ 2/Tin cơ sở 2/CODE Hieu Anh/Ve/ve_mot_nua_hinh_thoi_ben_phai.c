#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int a=1;a<=i;a++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int a=n;a>=i+1;a--){
			printf("*");
		}
		if(i<n)
		printf("\n");
	}
}
