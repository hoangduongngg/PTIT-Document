#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	
	for(int i=1;i<=a;i++){
		for(int j=b;j>0;j--){
		    	if(j % 2 == 0) printf("1");
		    	else printf("0");
		}
		printf("\n");
	}
}
