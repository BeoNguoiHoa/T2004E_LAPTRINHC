#include <stdio.h>

int main(){
	int n;
	printf("nhap n:");
	scanf("%d" ,&n);
	int ary[n],b;
	for(int i=0 ; i<n ; i++){
		printf("nhap so thu %d :",i);
		scanf("%d" ,&ary[i]);
	}
	for(int i=0 ; i<n ;i++){
		if(ary[i] % 2 != 0){
			b=ary[i];
		}
	}printf("So le cuoi cung: %d", b);
}

