#include <stdio.h>


int main(){
	float a;
	printf ("Nhap so tien gui:");
	scanf("%f", &a);
	a=4000*((1+0.08)*(1+0.08)*(1+0.08)*(1+0.08));
	printf("So tien nhan duoc sau 4 nam la: %f",a);
		
}
