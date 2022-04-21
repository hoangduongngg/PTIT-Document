#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>0;j--){
			if(i<j && j<n && i>1 )
			printf(".");
			else if(j>=i)
			printf("*");
			
		}
			printf("\n");
	}
}
