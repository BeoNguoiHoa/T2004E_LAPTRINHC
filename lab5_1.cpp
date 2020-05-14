#include <stdio.h>

int main(){
	int n,z=1;
	printf("nhap so:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		z=z*i;
	}printf("giai thua la %d",z);
}
