#include<stdio.h>
#define MAX 100

void Input(int arr[],int n){
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}

int SapxepMin(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] < arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main(){
	int arr[MAX];
	int n;
	
	do{
		scanf("%d", &n);
	}while(n<2);
	
	Input(arr,n);
	SapxepMin(arr,n);
	
	for(int i=0;i<n;i++)
	printf("%d ", arr[i]);
}
