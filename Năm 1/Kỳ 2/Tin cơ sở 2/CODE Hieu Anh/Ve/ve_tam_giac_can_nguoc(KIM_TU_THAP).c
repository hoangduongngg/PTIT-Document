#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int temp=n;
	for(int i=0;i<n;i++){
		if(i>0){
		  for(int j=1;j<=i;j++){
			printf("~");
		  }
	    }
		for(int h=2*n-1;h>=2*i+1;h--){
			printf("*");
		}
		
	
		printf("\n");
	}
}
