#include<stdio.h>
#include<math.h>
int main(){
	int n ; 
	scanf("%d", &n);
	for(int i =1 ; i<=n ; i++){
		for(int j = 1 ; j<= n ; j++){
			if(i<=j)
			printf("%d ",n-i+1);
			else printf("%d ", n-j+1);
		}
	printf("\n");	
	}
	return 0 ;
}
