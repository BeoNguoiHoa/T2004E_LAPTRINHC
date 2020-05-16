#include <stdio.h>

int main (){
	int a,b,sum=0;
	printf("Nhap vao 2 so a,b (a<b):");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>b){
		printf("Sai de bai\n");
	}else{
		for(int i=a; i<=b; i++){
			sum+=i;
		}
	}printf("tong cac so tu a den b la: %d",sum);
}
