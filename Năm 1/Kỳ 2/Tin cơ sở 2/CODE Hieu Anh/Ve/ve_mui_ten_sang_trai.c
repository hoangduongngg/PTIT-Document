#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			printf("~");
		}
		for(int j=n;j>=i;j--){
			if(i<n)
			printf("*");
		}
		if(i<n)
		printf("\n");
	}
	
	for(int k=1;k<=n;k++){
		int h=k+1;
		for(int l=1;l<k;l++){
			printf("~");
		}
		for(;h<=k+k;h++){
			
		       printf("*");
		      
		}
		
		printf("\n");
}
}
