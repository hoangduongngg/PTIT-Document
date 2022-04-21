#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int temp=1;
		for(int j=n;j>0;j--){
			for(int h=n-temp;h>0;h--){
				printf("~");
			}
			for(int k=1;k<=n;k++){
			    if(j < n && k > 1 && j > 1 && k < n)
				printf(".");
				else
				printf("*");
			    }
		    
			
				printf("\n");	
				temp++;
		}
	}




