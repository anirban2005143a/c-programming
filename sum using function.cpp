#include<stdio.h>
int sum(int a , int b){
	return a+b;
}

void printstar(int n){
	for(int i=1;i<=n;i++){
		printf("*");
	}
}

int printnum(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	return a;
}

void printstring(){
	printf("my name is anirban");
}
int main(){
	int a=7;
	int b=3;
	int c;
	c=sum(a,b);
	printf("the sum is %d" , c);
	printstar(10);
	int num = printnum();
	printf("%d" , num);
	printstring();
		
	return 0;
}
