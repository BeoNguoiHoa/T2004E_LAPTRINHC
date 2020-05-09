#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,p,s;
	printf ("nhap vao a,b,c tuong ung voi 3 canh tam giac:\n");
	printf ("a=\n");
	scanf ("%d" ,&a);
    printf ("b=\n");
	scanf ("%d" ,&b);
    printf ("c=\n");
	scanf ("%d" ,&c);
	if(a+b>c && b+c>a && a+c>b){
		p=a+b+c;
		s=(((sqrt)((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)))/4);
		printf ("Day la 3 canh cua tam giac co chu vi la %d va dien tich la %d" ,p,s);
	}else{
		printf ("Day khong phai la tam giac");
	}
	
	
}
