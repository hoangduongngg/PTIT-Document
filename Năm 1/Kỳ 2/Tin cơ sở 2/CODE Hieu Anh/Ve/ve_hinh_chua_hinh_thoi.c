#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//nua tren hinh thoi
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			printf("*");
		}
		if(i>1){
		   for(int k=1;k<i;k++){
			
				printf("~");
	       }
		}
		if(i>1){
		   for(int k=1;k<i;k++){
			
				printf("~");
	       }
	   }
	       for(int j=n;j>=i;j--){
			printf("*");
		}	
		printf("\n");
	}
	//nua duoi hinh thoi
	for(int i=1;i<=n;i++){
		if(i>1){
		   for(int j=1;j<=i;j++){
			   printf("*");
		   }
		   for(int k=n;k>=i;k--){
		   	   if(k<n)
		   	      printf("~");
		   }
		   for(int k=n;k>=i;k--){
		   	   if(k<n)
		   	      printf("~");
		   }
		   for(int j=1;j<=i;j++){
			   printf("*");
		   }
    printf("\n");
	    }
	}
}

