#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	
	for(int i=1; i<=a;i++){
		for(int j=b; j > 0 ;j--){
			if(i>1 && i<a && j > 1 && j <b) printf("0");
			else printf("1");
		}
		printf("\n");
	}
}
