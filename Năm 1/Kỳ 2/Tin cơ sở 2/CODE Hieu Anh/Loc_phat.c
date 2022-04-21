#include <stdio.h>
int main (){
unsigned long long a;
scanf("%llu", &a);
int count = 0;


while(a > 0){
	int temp = a % 10;
	if (temp == 6 || temp == 8 || temp == 0) {
	}
	else count++;

	a /= 10;
}
	if (count > 0) 
	printf("0");

    else printf("1");
}
