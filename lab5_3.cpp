#include <stdio.h>

int main(){
	int sum=0;
	printf("Tong 100 so le dau tien la:");
	for(int i=0; i<200 ;i++)
	{
		if(i%2!=0){
			sum+=i;
		}
	}printf("%d\n",sum);
	
}
