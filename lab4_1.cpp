#include <stdio.h>

int main(){
	int n,n2;
	printf("nhap vao so nguyen:");
	scanf("%d",&n);
	n2=0;
	for(n;n!=0;n/=10){
		n/=10;
		n2=n2*10+n%10;
	}
	printf("so nghich dao la %d",n2);
}
