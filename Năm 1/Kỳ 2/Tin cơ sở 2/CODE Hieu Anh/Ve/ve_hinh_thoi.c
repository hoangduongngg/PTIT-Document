#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//nua tren hinh thoi
	for(int i=1; i<=n; i++){
		for(int j=n;j>i;j--){
			printf("~");
		}
		for(int k=2*n; k>2*n-i;k--){
			printf("*");
		}
		if(i>1){
		   for(int h=1;h<=i-1;h++){
		   	   printf("*");
		   }
	}
		printf("\n");
	}
	//nua duoi hinh thoi
    for(int i=1; i<n; i++){
    	for(int j=n;j>n-i;j--){
    		printf("~");
    	}
    	for(int k=2*(n-i);k>n-i;k--){
    		printf("*");
    	}
    	for(int h=n-1;h>i;h--){
    		printf("*");
    	
    }
    	printf("\n");
    }
}
