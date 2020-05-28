#include <stdio.h>
#include <string.h>

void SortArrayString(char arr[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(arr[j],arr[j+1]) >0){
				char tmp[100];
				strcpy(tmp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],tmp);
			}
		}
	}
}


int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	char ary[n][100];
	for(int i=0;i<n;i++){
		printf("nhap chuoi thu %d:\n",i);
		scanf("%s",ary[i]);
	}
	SortArrayString(ary,n);
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",ary[i]);
	}
	return 0;
}
