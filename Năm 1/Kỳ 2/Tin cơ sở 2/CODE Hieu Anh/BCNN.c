#include <stdio.h>
int main (){
	int a, b;
	scanf("%d%d", &a, &b);
	int max, step;
	if (a > b) max = step = a;
	else       max = step = b;
	while(1) {
	if(max % a == 0 && max % b == 0)
	break;
	max += step;
}
	printf("%d", max);
}
