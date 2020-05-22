#include <stdio.h>

int main(){
	int n;
	printf("nhap n:");
	scanf("%d", &n);
	int ary[n];
	for(int i=0 ; i<n ; i++){
		printf("nhap so thu %d :",i);
		scanf("%d" ,&ary[i]);
	}
}
