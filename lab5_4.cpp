#include <stdio.h>

int main(){
	int n,i;
	printf("nhap 1 so:");
	
	for(i=2; i<=n; i++){
		if(n%i==0){
			printf("%d so nguyen to",n);
		}else{
			printf("day khong phai so nguyen to",n);
		}
	}
}
