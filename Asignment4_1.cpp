#include <stdio.h>

int main(){
	int x,y,z;
	printf("nhap x:\n");
	scanf("%d", &x);
	printf("nhap y:\n");
	scanf("%d", &y);
	printf("nhap z:\n");
	scanf("%d", &z);
	for(x;x<=0;){
		printf("nhap lai x:\n");
	        }
	for(y;y<=0;){
		printf("nhap lai y:\n");
            }
   for(z;z<=0;){
		printf("nhap lai z:\n");
			}
			
	if(x+y>z&&y+z>x&&x+z>y){
		printf("day la 3 canh cua tam giac");
	    }else{
	    	for(x;x>=z+y;){
	    		printf("nhap lai x:\n");
			}
			for(y;y>=z+x;){
				printf("nhap lai y:\n");
			}
			for(z;z>=x+y;){
				printf("nhap lai z:\n");
			}
			printf("day la 3 canh cua tam giac");
		}		
}
