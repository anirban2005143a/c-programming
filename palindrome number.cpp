#include<stdio.h>

int main(){
	
	int n , original;
	int reverse = 0;
	original = n;
	printf("enter any number: ");
	scanf("%d" , &n);
	
	while(n!=0){
		reverse = reverse*10 + (n%10);
		n = n/10;
	}
	
	if(original = reverse){
		printf("this is a palindrome number");
	}
	else{
		printf("this is not a palindrome number");
	}
	
	return 0;
}
