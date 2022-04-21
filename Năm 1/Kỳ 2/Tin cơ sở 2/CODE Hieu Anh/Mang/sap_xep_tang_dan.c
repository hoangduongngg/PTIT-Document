#include<stdio.h>
#define MAX 100
void NhapMang(int arr[],int n){
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}

int SapXepMax(int arr[],int n){
		int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
    }
  
}


int main(){
	int arr[MAX];
	int n;
	do{
		scanf("%d", &n);
	}while(n < 2);
	
	NhapMang(arr,n);
	
	SapXepMax(arr,n);
	  for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
}
	return 0;
	}
