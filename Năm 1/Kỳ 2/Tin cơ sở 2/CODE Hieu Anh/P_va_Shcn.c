#include <stdio.h>
int main(){
int a, b;
scanf("%d%d", &a, &b);
if ( a > 0 && b > 0 ){
	int chuvi = (a + b)*2;
printf("%d\t", chuvi);
int dientich = a * b;
printf("%d", dientich);
}
else{ 
	printf("0");
} 

}


