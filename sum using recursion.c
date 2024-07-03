#include<stdio.h>

int sum(int n){
	if(n==1){
		return 1;
	}
	int a = sum(n-1);
	int sum = a + n;
	return sum;
}

int main(){
	int n;
	printf("enter a number: ");
	scanf("%d" , &n);
	
	int b = sum(n);
	printf("%d\n" , b);
}
