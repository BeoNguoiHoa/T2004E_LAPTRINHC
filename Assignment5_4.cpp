#include <stdio.h>

int main(){
    int a,b,c;
    printf("Nhap a: ");
    scanf("%d",&a);
	printf("Nhap b: ");
    scanf("%d",&b);
    if(a==0 && b==0){
    	printf("khong co uoc chung");
	}else{
		while((c = (a%b)) != 0)
    {
        a = b;
        b = c;
    }
 
    printf("UCLN = %d",b);
	}
}
