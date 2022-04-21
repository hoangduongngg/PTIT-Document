#include <stdio.h>
int main (){
	int a;
	scanf("%d", &a);
	int i = 1;
	int count = 0;
	for (;i <= a;i++){
		if(a % i ==0){
		count++;
}
}

	if (count > 2){
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}

