#include<stdio.h>

int main(){
	char op;
	int a,b,c;
	printf("enter any operator(+,-,/,*): " );
	scanf("%c" , &op);
	printf("enter two numbers: ");
	scanf("%d %d" , &a, &b);
	
	switch(op){
		case '+' :
			c=a+b;
			break;
		 
		case '-' :
			c=a-b;
			break;
		
		case '/' :
			c=a/b;
			break;
		
		case '*' :
			c=a*b;
			break;
		 
		default:
		    printf("operator is not correct");
		
	}
	printf("%d" , c);
}
