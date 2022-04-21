#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		if(i<=1){
		}
		else{
		     for(int b=2*(i-1);b>0;b--){
			     printf("~");
		     }
	    }
		     for(int a=n;a>=i;a--){
			     printf("*");
		     }    
	printf("\n");
	}
	
	for(int j=1;j<=n;j++){
		if(j<=1){
		}
		else{
		
		     for(int c=2*(n-j);c>0;c--){
			     printf("~");
		     }
		     for(int d=1;d<=j;d++){
		     	printf("*");
		     }
	printf("\n");
	    }
    }
}


