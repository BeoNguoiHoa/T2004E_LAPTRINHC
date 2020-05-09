#include <stdio.h>

int main (){
	int a,b,x1,x2;
	printf ("nhap 2 so a va b\n");
	printf ("a=\n");
	scanf  ("%d" ,&a);
	printf ("b=\n");
	scanf ("%d" ,&b);
	if(a>=b){
		x1 = (a*b);
		printf ("(a*b) = %d" ,x1);
	}else{
		x2= (a/b);
		printf ("(a/b) = %d" ,x2);
	}
}
