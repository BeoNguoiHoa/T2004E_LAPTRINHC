#include <stdio.h>
#include <string.h>

bool KiemTra(char s[],char arr[][100],int n){
	for(int i=0;i<n;i++){
		if(strcmp(s,arr[i]) == 0){
			return true;
		}
	}
	return false;
}


int main(){
	char s[100],arr[5][100];
	printf("nhap chuoi s=");
	scanf("%s",s);
	for(int i=0;i<5;i++){
		printf("nhap chuoi thu %d :",i);
		scanf("%s",arr[i]);
	}
	if(KiemTra(s,arr,5)){
		printf("chuoi %s thuoc mang",s);
	}else{
		printf("chuoi %s khong thuoc mang",s);
	}
	return 0;
}
