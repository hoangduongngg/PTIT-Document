#include<stdio.h>

int Tach(int n){
	int last,so;
	int temp=n;
	while(temp>0){
	     last= temp % 10;
	     so=so*10+last;
	     temp /= 10;
    }
    return so;
}

int Test(int n){
	if(Tach(n)==n){
		printf("1");
	}
	else {
		printf("0");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	
	Test(n);
}
