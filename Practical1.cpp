#include <stdio.h>
#include <string.h>

void concat(char str1[],char str2[]){
	printf("Enter the first string:");
	scanf("%s",str1);
	printf("Enter the second string:");
	scanf("%s",str2);
	strcat(str1," ");
	strcat(str1,str2);
	printf("The concatenated string: %s",str1,str2);
}

int main(){
	char str1[20],str2[20];
	concat(str1,str2);
	return 0;
}
