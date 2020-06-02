#include <stdio.h>
#include <string.h>

void dem(char str[]){
	for(int i=0;i<strlen(str);i++){
		if(str[i] == 'a') a++;
		if(str[i] == 'e') e++;	
		if(str[i] == 'i') i++;
		if(str[i] == 'o') o++;
		if(str[i] == 'u') u++;
	}
	printf("a: %d;e: %d;i: %d;o: %d;u: %d",a,e,i,o,u)
}

void nhap(char str[]){
	printf("Enter string:")
	scanf("%s",str);
}
int main(){
	char str[100];
	int a,e,i,o,u;
	nhap(str);
	dem(str);
	return 0;
}
