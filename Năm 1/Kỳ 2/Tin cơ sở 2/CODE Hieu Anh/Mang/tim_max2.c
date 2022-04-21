#include<stdio.h>
const int MAX = 100;

void NhapMang(int arr[],int n){
	for(int i=1;i<=n;i++){
		scanf("%d", &arr[i]);
	}
}

int Max1(int arr[],int n){
	int max1=arr[1];
	for(int i=1;i<=n;i++){
		if(arr[i] > max1){
			max1=arr[i];
		}
	}
	return max1;
}

int Max2(int arr[],int n){
	int max2=arr[1];
	for(int i=1;i<=n;i++){
		if(arr[i]>max2 && arr[i] < Max1(arr,n)){
			max2=arr[i];
		}
	}
	return max2;
}

int main(){
	int arr[MAX];
	int n;
	
	do{
		scanf("%d", &n);
	}while(n < 2 );
	
	NhapMang(arr,n);
	printf("%d", Max2(arr,n));
    return 0;
}
