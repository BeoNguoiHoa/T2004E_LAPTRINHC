#include <stdio.h>

int main(){
	int n;
	printf("nhap vao so:");
	scanf("%d",&n);
	int dem=1;
	while(n>=10){
		n/=10;
		dem++;
	}printf ("So luong chu so la: %d",dem);
}
