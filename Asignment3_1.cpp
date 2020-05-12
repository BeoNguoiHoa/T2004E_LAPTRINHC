#include <stdio.h>

int main (){
	int a,b,c,d,x,y,a1,b1,z,k;
	printf("nhap so nguyen duong co khong qua 4 chu so:");
	scanf("%d", &x);
	if(x>=0 && x<=9999){
		a=x%10;
		a1=x/10;
		b=a1%10;
		b1=a1/10;
		c=b1%10;
		d=b1/10;
	    y=1000*a+100*b+10*c+d;
		printf("so dao nguoc la: %d",y);
	}else if(x>=100 && x<=999){
		a=x%10;
	    a1=x/10;
	    b=a1%10;
	    b1=a1/10;
	    c=b1%10;
	    d=b1/10;
	    z=100*a+10*b+c;
	printf("%d",z);
    }else if(x>0 && x<=99){
    	a=x%10;
	    a1=x/10;
        b=a1%10;
	    b1=a1/10;
	    c=b1%10;
	    d=b1/10;
	    k=10*a+b;
	printf("%d",k);
	}else{
		printf("khong co so dao nguoc!");
	}
	
}
