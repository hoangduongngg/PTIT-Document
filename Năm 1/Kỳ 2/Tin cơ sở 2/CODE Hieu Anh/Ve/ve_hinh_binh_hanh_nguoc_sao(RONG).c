#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	
	int temp=b;
		for(int j=1;j<=a;j++){
			for(int h=b-temp;h>0;h--){
				printf("~");
			}
			for(int k=1;k<=b;k++){
				if(j > 1 && j < a && k < b  && k > 1)
				printf(".");
				else
				printf("*");
			}
			
				printf("\n");	
				temp--;
		}
}
