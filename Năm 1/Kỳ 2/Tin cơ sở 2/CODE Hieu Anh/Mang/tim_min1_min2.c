#include<stdio.h>
#define MAX 100

void NhapMang(int arr[], int n){
	for(int i=1;i<=n;i++){
		scanf("%d", &arr[i]);
	}
}

int Min1(int arr[],int n){
	int min1=arr[1];
		for(int i=1;i<=n;i++){    
		if(arr[i] < min1){
			min1=arr[i];
		}
	}
	return min1;
}

int Min2(int arr[],int n){
	int min2=arr[2];
		for(int i=1;i<=n;i++){
		if(arr[i]<min2 && arr[i]>Min1(arr,n)){  //a[i]>max2 && a[i]<max
			min2=arr[i];
		}
	}
	return min2;
}

int main(){
	int arr[MAX];
	int n;
	
	do{
		scanf("%d", &n);
	}while(n < 2 );
	
	NhapMang(arr,n);

	printf("%d\t",Min1(arr,n));
	printf("%d",Min2(arr,n));
}
