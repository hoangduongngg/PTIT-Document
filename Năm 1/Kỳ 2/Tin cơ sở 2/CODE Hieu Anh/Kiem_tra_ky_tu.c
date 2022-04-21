#include<stdio.h>
int main(){
	char ky_tu;
	scanf("%c", &ky_tu);
	if((ky_tu >= 'a' && ky_tu <= 'z') || (ky_tu >= 'A' && ky_tu <= 'Z'))
	printf("1");
	else printf("0");
}
