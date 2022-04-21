#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	int maxValue = a;
	
	if (b > maxValue){
		printf("%d", b);
	}
		else if (c > maxValue){
		printf("%d", c);
}
	else
		printf("%d", a);
	}
