#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int temp=n;
	int last1, last2;

	while(temp>0){
		int tmp=n;
		int count=0;
		last1= temp % 10;
		while(tmp>0){
			  last2= tmp % 10;
			  if(last1==last2){
			  	count++;
			  }
			  tmp /= 10;
		}
		temp /= 10;
		printf("%d %d", last1, count);
	printf("\n");
	}
}
