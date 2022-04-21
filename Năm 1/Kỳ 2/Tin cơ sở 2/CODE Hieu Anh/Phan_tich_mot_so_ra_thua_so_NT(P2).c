#include <stdio.h>
int main (){
	int a;
	scanf("%d", &a);
    int count ;

	for (int i = 2; i <= a; i++){
        count = 0;
		while (a % i == 0){
				a /= i;
				count++;
			}
			if (count){
			if ( count > 1) printf("%dx%d", i, count);
			else    printf("%d", i); 
            if (a > i) printf("x");}
	} 
}
	
