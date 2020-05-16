#include <stdio.h>

int main(){
	int n,sum=0,i;
	printf("nhap so:");
	scanf("%d",&n);
	for(;n!=0;){
		i = n % 10;
		sum += i;
		n /= 10;
	}printf("%d",sum);
}
