#include<stdio.h>

int fib(int n){
	int num1 = 0;
	int num2 = 1;
	int nextterm , i;
	
	while(i<=n){
		printf("%d " ,  num1);
		nextterm = num1 + num2;
		num1 = num2;
		num2 = nextterm;
	}
}

int main(){
	
	int n;
	printf("enter a number: ");
	scanf("%d" , &n);
	
	fib(n);
	return 0;
}
