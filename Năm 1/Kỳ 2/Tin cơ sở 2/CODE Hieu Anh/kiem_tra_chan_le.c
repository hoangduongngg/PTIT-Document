/*Vi?t chuong trình C cho phép nh?p vào m?t s? nguyên duong và ki?m tra xem s? dó là s? ch?n hay s? l?.
N?u là s? ch?n thì in ra 0, s? l? in ra 1
(Luu ý n?u ngu?i dùng nh?p vào s? nh? hon 0 thì in ra 0)
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
