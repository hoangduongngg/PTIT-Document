/*Vi?t chuong tr�nh C cho ph�p nh?p v�o m?t s? nguy�n duong v� ki?m tra xem s? d� l� s? ch?n hay s? l?.
N?u l� s? ch?n th� in ra 0, s? l? in ra 1
(Luu � n?u ngu?i d�ng nh?p v�o s? nh? hon 0 th� in ra 0)
INPUT
5
OUTPUT
1
*/
#include <stdio.h>
int main(){
int a;
scanf("%d", &a);

if (a % 2 == 0)
{
	printf("0",a);
}
else if(a < 0){
printf("0");
}
else{ 
printf("1",a);
}
return 0;
}
