#include<stdio.h>
const int MAX = 100;

void NhapMang(int a[],int n){
	for(int i=0;i < n;i++){
		printf("\nNhap a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[],int n){
	for(int i=0;i < n;i++){
		printf("\na[%d] la = %5d", i,a[i]);
}
}
int main(){
	int n;
	int arr[MAX];
	scanf("%d", &n);
	NhapMang(arr,n);
	XuatMang(arr,n);
}
     
