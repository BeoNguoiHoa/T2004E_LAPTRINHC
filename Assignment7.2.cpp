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
	}printf("Ma tran a la: \n");
	for(i=0;i<3;i++){
	
		for(j=0;j<4;j++){
			
	printf("%2d",a[i][j]);
		
	}

	printf("\n");}
	
	int n,m;
	int b[50][50];
	printf("Nhap vao ma tran 4x3\n");
	for (i=0;i<3;i++){
		for(j=0;j<4;j++){
			 printf("Nhap phan tu b[%d][%d] : ", i, j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Ma tran b la: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			
	printf("%2d",b[i][j]);
		
	}
	printf("\n");
}
printf("Tong 2 ma tran la : \n");
int c[i][j];
for (i=0;i<3;i++){
		for(j=0;j<4;j++){
			c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<3;i++){
	for(j=0;j<4;j++){
		printf("%2d",c[i][j]);
	}
	printf("\n");
	
		
}
}
