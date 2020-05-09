#include <stdio.h>

int main(){
	int num;
	printf("Nhap num \n");
	scanf("%d", &num);
	if(num>=2 && num<=7){
		printf("thu %d",num);
	}else if (num==8){
		printf("day la chu nhat");
	}else{
		printf("khong phai ngay trong tuan!");
    }
	}

