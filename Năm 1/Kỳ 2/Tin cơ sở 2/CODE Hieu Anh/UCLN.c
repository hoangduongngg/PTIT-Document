#include<stdio.h>
int main (){
	int a, b;
	scanf("%d%d", &a, &b);
	int min;

	if (a > b ) min = b;
	else        min = a;
	while(1){
		if ( a % min == 0 && b % min == 0) 
		break;
		min--;
	}
	printf("%d", min);
}
