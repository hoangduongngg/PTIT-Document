#include<stdio.h>
int main (){
	int n, so;
	scanf("%d", &n);
	while(n > 1){
	 int count = 0;
	for(int i = 2; i <= n; i++){
	
	if (n % i == 0)
	count++;
}
if (count > 1) {
}
else so = so + n;
n--;
}
printf("%d", so);
}
