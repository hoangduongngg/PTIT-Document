#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	int minValue = a;
	
	if (b < minValue){
		printf("%d", b);
	}
		else if (c < minValue){
		printf("%d", c);
}
	else
		printf("%d", a);
	}
