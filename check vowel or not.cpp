#include<stdio.h>

int main(){
	
	char alpha,a,e,i,o,u,A,E,I,O;
	printf("enter any letter: %c" , alpha);
	scanf("%c" , &alpha);
	if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'){
		printf("this is a vowel");
	}
	else if(alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U'){
		printf("this is a vowel");
	}
	else{
		printf("this is a consonent");
	}
	return 0;
}
