#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("Nhap n:");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:",i);
		scanf("%d",p+i);
	}
	int max=0,dem=0;
	for(int i=0;i<n;i++){
		if(*(p+i) > 0){
			dem+= *(p+i);
			if(dem>max) dem=max;
		}else{
			dem=0;
		}
	}
	printf("tong so duong lien tiep lon nhat: %d",max);
}
