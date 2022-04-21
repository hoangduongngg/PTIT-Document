#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i+1;j--){
			printf("~");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i<n)
			printf("~");
		}
		for(int k=1;k<=n-i;k++){
			printf("*");
		}
		printf("\n");
	}
}
