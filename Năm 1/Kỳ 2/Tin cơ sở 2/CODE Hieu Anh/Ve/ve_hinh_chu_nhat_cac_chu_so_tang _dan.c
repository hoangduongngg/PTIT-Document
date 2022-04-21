#include<stdio.h>

int main(){
	
	int a,b;
	scanf("%d%d", &a, &b);
	int so=1;
	for(int i=1;i<=a;i++){
		for(int j=b; j>0; j--){
			printf("%d", so);
			so++;
		}
		
		printf("\n");
	}
}
