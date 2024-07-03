#include<stdio.h>

int main(){
	
	char a;
	printf("enter your alphabate: ");
	scanf("%c" , &a);
	
	if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ||
	a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
		printf("vowel");
	}
	else{
		printf("NOT A VOWEL");
	}
	
	return 0;
}
