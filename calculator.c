#include<stdio.h>

int main(){
	char op;
	printf("enter a charecter: ");
	scanf("%c" , &op);
	int a,b;
	printf("enter two number: ");
	scanf("%d %d" , &a , &b);
	
	int result;
	
	switch(op){
		case '+':
			result = a+b;
			break;
		case '-':
			result = a-b;
			break;
		case '*':
			result = a*b;
			break;	
		case '/':
			result = a/b;
			break;
		deafult:
			printf("i am still leaning more");			
	}
	
	printf("%d" , result);
	
	return 0;
}
