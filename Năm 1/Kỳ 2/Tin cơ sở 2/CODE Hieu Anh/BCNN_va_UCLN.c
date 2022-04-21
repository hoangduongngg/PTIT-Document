#include <stdio.h>
int main() {
int max, step, min;
int a, b;
scanf("%d%d", &a, &b);

if (a > b) max = step = a;
else       max = step = b;
if (a < b) min = a;
else       min = b;

while(1){
	if (a % min == 0 && b % min == 0)
	break;
	min-- ;
}
while(1){
	if (max % a == 0 && max % b == 0)
	break;
	max += step ;
}
	printf("%d\t", min); 
	printf("%d", max);
}

