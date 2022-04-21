#include<stdio.h>
int main (){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a == 0 && b == 0) printf("VSN");
	if (a == 0 && b != 0) printf("VN");
	if (a != 0) printf("%.2f", -b / (float)a);
}
