#include<stdio.h>
int KiemtraFabonacci(int a,int b){
      	  int n1 = 1, n2 = 1, n3 = 0,temp = 0;
    if(a > b){
      for(int i = b; i <= a;i++){
          while(n1 + n2 <= i){
          	n3 = n1 + n2;
          	n1 = n2;
          	n2 = n3;
    
          if (n3 == i) printf("%d ", i);
		  }	      
}
}
else if (a < b){
	for(int i = a; i <= b;i++){
		if(i < 10){
          while(n1 + n2 <= i){
          	n3 = n1 + n2;
          	n1 = n2;
          	n2 = n3;
    
          if (n3 == i) printf("%d ", i);
		  }	      
}
else{
	int j = i;
		while(j > 0){
		     temp += j % 10;
		     j /= 10;		     
		}
          while(n1 + n2 <= temp){
          	n3 = n1 + n2;
          	n1 = n2;
          	n2 = n3;
    
          if (n3 == temp) printf("%d ", i);
		  }	      
}
}

}
}

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	KiemtraFabonacci(a,b);
}
