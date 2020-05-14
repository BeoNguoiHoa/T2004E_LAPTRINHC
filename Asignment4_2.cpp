#include <stdio.h>

int main(){
	int a,b;
	printf("nhap vao 1 so tu nhien:\n");
	scanf("%d", &a);
	
	for(b;b<a;b++){
		if(b%3==0){
			printf("nhung so chia het cho 3 la: %d\n");
		}
	}
}
