
#include<stdio.h>

int a[100];
int b[100];
int n;


void nhap(){
		int temp=n;
	for(int i = 0; i<n; i++){
		a[i]= temp % 10;
		scanf("%d", &a[i]);
		temp /= 10;
	
	}
}

void dem(){		
	for( int i = 0; i< n; i++ ){
		int count = 1;
	
			for( int j = 1+i; j < n; j ++ ){
				if( a[j] == a[i] ) {
					count++;
				}
			}
			printf("%5d\t\t%5d\n", a[i], count);
		}
	}

int main(){
	printf("\nNhap n = ");
	scanf("%d", &n);
	nhap();
	dem();
	return 0;
}
