#include<stdio.h>
#define MAX 100

void Input(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}

int Sapxep(int a[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}


int Chan(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i] % 2==0){
			printf("%d ", a[i]);
		}
	}
}

int Le(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i] % 2 !=0){
			printf("%d ", a[i]);
		}
	}
}

int main(){
	int a[MAX];
	int n;
	
	do{
		scanf("%d", &n);
	}while(n<2);
	
	Input(a,n);
	
	Sapxep(a,n);
	
	Chan(a,n);

	Le(a,n);

	
}


