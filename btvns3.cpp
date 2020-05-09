#include <stdio.h>
#include <math.h>

int main (){
	float a,b,c,x1,x2,x,delta;
	printf("nhap 3 so a,b,c\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
    scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	delta = b*b-4*a*c;
	if(a==0){
		if(b==0){
			printf("phuong trinh vo nghiem");
		} else {
			printf("phuong trinh co 1 nghiem x = %f",(-c/b));
		}
	} else {
		if(delta>0){
			x1 = (float) ((-b+sqrt(delta)) / (2*a));
			x2 = (float) ((-b-sqrt(delta)) / (2*a));
			printf("phuong trinh co 2 nghiem la: x1 = %f va x2 = %f ", x1,x2);
		} else if(delta==0) {
			x1 = (-b/(2*a));
			printf("phuong trinh co nghiem kep la: x1 = x2 = %f", x1);
		} else {
			printf("phuong trinh vo nghiem");
		}
	}
	
	}
	
	

