#include <stdio.h>
#include<stdbool.h>
bool Kiemtra(int n){
	int sum=0;
	for (int i=1 ; i<n ; i++){
         if (n % i == 0){
             sum += i;
         }  
    }
     if(sum==n) return true;
     else return false;
}

int Lietke(int a,int b){
	if(a>b){
	  for (int i=b ; i<a ; i++){
           if(Kiemtra(i) == true)
           printf("%d ", i);
       }
	}
    if(a<b){
	  for (int i=a ; i<b; i++){
           if(Kiemtra(i) == true)
           printf("%d ", i);
       }
    }
}

int main(){
int a,b;
scanf("%d%d", &a,&b);

Lietke(a,b);

return 0;
}


