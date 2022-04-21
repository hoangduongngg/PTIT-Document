#include<stdio.h>
#define MAX 100
void NhapMang(int a[],int n){
	for(int i = 1; i<=n; i++){
		scanf("%d", &a[i]);
	}
}

int Demsochan(int a[],int n){
	int chan=0;
	for(int i = 1; i<=n; i++){
		if(a[i]%2==0){
			chan++;
		}
	}
	return chan;
}

int Demsole(int a[],int n){
	int le=0;
	for(int i = 1;i<=n;i++){
		if(a[i]%2!=0){
			le++;
		}
	}
	return le;
}

int main(){
	int arr[MAX];
			int n;
	
	do{
	scanf("%d", &n);
	}while(n < 1 && n > MAX);
	
	NhapMang(arr,n);
		
	printf("%d\t",Demsochan(arr,n));
	printf("%d", Demsole(arr,n));
	
}
