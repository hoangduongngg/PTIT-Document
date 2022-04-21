#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool Check(int n){
int sum=0;
for (int i=1 ; i<= (n/2) ; i++){
if (n % i == 0){
sum += i;
}
}
if (sum == n){
return true;
}
return false;
}

int main(){
int n;
scanf("%d",&n);

for (int i=1 ; i<n; i++){
if (Check(i)){
printf("%d ", i);
}
}
return 0;
}
