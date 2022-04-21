#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int nam=0;
	int tuan=0;
	int ngay=0; 
	
	for(int i=365;i<=n;){
		if(n-i >=0){
			nam++;
		}
		n -=365;
	}
	for(int i=7;i<=n;){
		if(n-i>=0){
			tuan++;
		}
		n -= 7;
	}
	for(int i=1;i<=n;){
		if(n-i>=0){
			ngay++;
		}
		n -= 1;
	}
	printf("%d %d %d", nam,tuan,ngay);
}
