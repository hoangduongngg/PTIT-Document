#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int temp=n-1;
	for(int i=1; i<=n; i++){
		for(int j=n-temp;j<n;j++){
			printf("~");}
			for(int h=1;h<=2*i-1;h++){
				printf("*");
			}
				
		temp--;
		
		printf("\n");
	}
}
