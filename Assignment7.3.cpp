#include<stdio.h>


int main(){
	int i,j;
	int a[50][50];
	printf("Nhap vao ma tran 4x3\n");
	for (i=0;i<3;i++){
		for(j=0;j<4;j++){
			 printf("Nhap phan tu a[%d][%d] : ", i, j);
			scanf("%d",&a[i][j]);
		}
	}printf("Ma tran a la : \n");
	for(i=0;i<3;i++){
	
		for(j=0;j<4;j++){
			
	printf("%2d",a[i][j]);
		
	}

	printf("\n");
}
printf("Ma tran chuyen vi la : \n");
	int b[j][i];
	for (i=0;i<4;i++){
		for(j=0;j<3;j++){
			b[i][j]=a[j][i];
			printf("%2d",b[i][j]);
		}
		printf("\n");
	}
}
