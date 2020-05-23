#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("nhap n=\n");
	scanf("%d",&n);
	p =(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",p+i);
	}
	int max = 0, count = 0;
	for(int i=0;i<n;i++){
		if(*(p+i) > 0){
			count+=*(p+i);
			if(count > max) max = count;
		}else{
			count = 0;
		}
	}
	printf("tong so duong lien tiep nhieu nhat : %d",max);
	
}
