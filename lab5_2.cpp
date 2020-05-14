#include <stdio.h>

int main(){
	int n;
	printf("nhap so:");
	scanf("%d", &n);
	float S=0;
	for(float i=1;i<=n;i++){
		S+=1/(float)i;
	}
	printf("S = %f", S);
	
}
