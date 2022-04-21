#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a > b)
	for(int i = b; i <= a; i++){
		if(i < 10){
			int count1 = 0;
			count1++;
			int so1 = 0;
		so1 = so1 + pow(i,count1);
		if (so1 == i) printf("%d\t", i);
		}
		else{
		int j = i;
	    int count2 = 0;
	   while (j > 0){
		j /= 10;
        count2++;
	}
	int so2 = 0;
	for(int temp = i; temp > 0;){
        int socuoi = temp % 10;
            so2 = so2 + pow(socuoi,count2); 
            temp /= 10;
        }
    if (so2 == i) printf("%d\t", i);
}
}
else{
	for(int i = a; i <= b; i++){
		if(i < 10){
			int count1 = 0;
			count1++;
			int so1 = 0;
		so1 = so1 + pow(i,count1);
		if (so1 == i) printf("%d\t", i);
		}
		else{
		int j = i;
	    int count2 = 0;
	   while (j > 0){
		j /= 10;
        count2++;
	}
	int so2 = 0;
	for(int temp = i; temp > 0;){
        int socuoi = temp % 10;
            so2 = so2 + pow(socuoi,count2); 
            temp /= 10;
        }
    if (so2 == i) printf("%d\t", i);
}
}
}
}

