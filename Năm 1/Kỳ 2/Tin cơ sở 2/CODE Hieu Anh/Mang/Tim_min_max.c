#include<stdio.h>
#define MAX 100

void NhapMang(int a[], int n){
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
}

int max(int a[],int n){
	int max=a[1];
	for(int i=1;i<=n;i++){
		if(a[i] > max){
			max=a[i];
		}
	}
	return max;
}

int min(int a[],int n){
	int min=a[1];
		for(int i=1;i<=n;i++){
		if(a[i] < min){
			min=a[i];
		}
	}
	return min;
}

int main(){
	int arr[MAX];
	int n;
	
	do{
		scanf("%d", &n);
		
	}while(n < 1 && n > MAX);
	
	NhapMang(arr,n);
	max(arr,n);
	min(arr,n);
	
	printf("%d\t",max(arr,n));
	printf("%d",min(arr,n));
}
