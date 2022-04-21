#include <stdio.h>
int main (){
	int a;
	      scanf("%d", &a);
	int temp;
	int so= 0;

	while ( a > 0){
	      temp = a % 10;
	    so = so*10 + temp;
		  a /= 10;
		  }
		  printf("%d", so);
}
