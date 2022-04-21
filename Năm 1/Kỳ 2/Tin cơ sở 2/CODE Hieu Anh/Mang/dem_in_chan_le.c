#include<stdio.h>
#define MAX 100

void NhapMang(int arr[],int n){
	for(int i=1;i<=n;i++){
		scanf("%d", &arr[i]);
	}
}

int Sole(int arr[], int n){
	int le=0;
	
	 for(int i=1;i<=n;i++){
		if(arr[i]%2!=0){
			le++;
	}
}
	if(le < 1) printf("0");
	else printf("%d ", le);

 for(int i=1;i<=n;i++){
		if(arr[i]%2!=0){
			printf("%d ", arr[i]);
	}
}
}
int Sochan(int arr[], int n){
	int chan=0;
	
	
	for(int i=1;i<=n;i++){
		if(arr[i]%2==0){
			chan++;
		}
	}
	if(chan < 1) printf("0");
		else printf("%d ", chan);

	for(int i=1;i<=n;i++){
		if(arr[i]%2==0){
			printf("%d ", arr[i]);
		}
	}
}

int main(){
	int arr[MAX];
	int n;
	do{
		scanf("%d", &n);
	}while(n<2);
	
	NhapMang(arr,n);
	Sochan(arr,n);
	printf("\n");
	Sole(arr,n);

}
