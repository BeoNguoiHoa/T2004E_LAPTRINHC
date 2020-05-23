#include<stdio.h>


int main(){
	int i,j;
	int a[50][50];
	printf("Nhap vao ma tran 4x4\n");
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			 printf("Nhap a[%d][%d] : ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
	printf("%2d",a[i][j]);
		
	}
	printf("\n");
	
}int s ;
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		s= a[0][0]+a[1][1]+a[2][2]+a[3][3] ;
		
	
}

}printf("Trung binh duong cheo: %0.2f",(float)s/4);
}
