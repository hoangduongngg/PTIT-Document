#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	
	int temp=b;
		for(int j=a;j>0;j--){
			for(int h=b-temp;h>0;h--){
				printf("~");
			}
			for(int k=1;k<=b;k++){
				printf("*");
			}
			
				printf("\n");	
				temp--;
		}
}
