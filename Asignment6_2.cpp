#include <stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d" ,&n);
	int ary[n];
	for(int i=0 ; i<n ; i++){
		printf("nhap so thu %d :" ,i);
		scanf("%d", &ary[i]);
	}
	
	int min = ary[0];
	for(int i=0 ; i<n ; i++){
		if(min>ary[i]){
			min = ary[i];
		}
	}
	int n_min=min;
	for(int i=0 ; i<n ; i++){
		if(ary[i]>0){
			n_min=ary[i];
			break;
		}
	}
	for(int i=0 ; i<n ; i++){
		if(n_min>ary[i] && ary[i]>0){
			n_min = ary[i];
		}
	}printf("so duong be nhat la : %d", n_min);
	
}

