#include<stdio.h>
#include<stdbool.h>

int Tachcs(int n){
	int s=0;
	while (n>0){
		s+= n%10;
		n=n/10;
	}
	if (s%10==0){
    	return true;
    }
    else return false;
    }

int Thuannghich(int n){
	int m=0,n1=n;
	while (n>0){
		m=m*10 + n%10;
		n=n/10;
	}
	if (m==n1) return true;
	else return false;
}

void Value(int n){
	int i=1,j=1,dem=0;
	for(int k=0;k<n-1;k++)
		i = i*10;
	for (int k=0;k<n;k++)
	    j = j*10;
    for (int k=i;k<j;k++)
    if (Tachcs(k)==true && Thuannghich(k)==true) dem++;
    printf("%d\n",dem);   
	}


int main(){
     int n;
	scanf("%d",&n);

	Value(n);
	}

