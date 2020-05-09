#include <stdio.h>

int main(){
	int x1,x2,x3;
	printf("nhap vao 3 so\n");
	printf("So thu nhat:\n");
	scanf("%d",&x1);
	printf("So thu hai:\n");
	scanf("%d",&x2);
	printf("So thu ba:\n");
	scanf("%d",&x3);
	if(x1<x2 && x1<x3){
		printf("%d la so nho nhat",x1);
	}
	if(x2<x1 && x2<x3){
		printf("%d la so nho nhat",x2);
	}
	if(x3<x1 && x3<x2){
		printf("%d la so nho nhat",x3);
	}
}
