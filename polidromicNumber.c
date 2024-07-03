#include<stdio.h>

int main(){
	
	int n;
	printf("enter number: ");
	scanf("%d" , &n);
	int original = n;
	int reverse=0;
	int i,lastdigit;
	while(n>0){
		lastdigit = n%10;
		reverse = (reverse*10) + lastdigit;
		n  = n/10;
	}
	
	if(original = reverse){
		printf("polidroimic number");
	}
	else{
		printf("not a polidromic");
	}
	
	return 0;
}
