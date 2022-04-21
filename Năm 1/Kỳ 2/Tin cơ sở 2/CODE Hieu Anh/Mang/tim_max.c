#include<stdio.h>
#define MAX 100

void NhapMang(int a[], int n){
	for(int i=1;i<=n;i++){
		printf("Nhap a[%d]=", i);
		scanf("%d", &a[i]);
	}
}

int TimMax(int a[],int n){
	int max=a[1];
		for(int i=1;i<=n;i++){
	if(max < a[i]){
		max=a[i];
	}
	return max;
}
}

int main(){
	int arr[MAX];
	int n;
	
	do{
		scanf("%d", &n);
		
	}while(n < 2 || n > MAX);
	
	NhapMang(arr,n);
	TimMax(arr,n);
	printf("%d",TimMax(arr,n));
}
