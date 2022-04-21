#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	
	if(a==b && a==c){
	printf("3");
}
	if((a==b || a==c) && (b!= c)) {
	printf("2");
}
	if(a*a+b*b==c*c || a*a+c*c==b*b ||c*c+b*b==a*a) {
printf("1");
}

	return 0;
}
