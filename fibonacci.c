#include<stdio.h>

void fib(int n){
	int num1=0;
	int num2=1;
	int nextnum =1;
	int i=0;
	while(i<n){
		printf("%d  " , num1);
		num1 = num2; 
		num2 = nextnum;
		nextnum = num1 + num2;
		i++;
	}
}

int main(){
	
	int n;
	printf("enter your number: ");
	scanf("%d" , &n);
	
	fib(n);
	
	return 0;
}
