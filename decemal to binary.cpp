#include<stdio.h>

int main(){
	
	int n , bin=0 , rem =0  , place=1;
	printf("enter a decemal number: ");
	scanf("%d" , &n);
	
	while(n>0){
		rem = n%2;
		bin = bin +(rem*place);
		place = place*10;
		n= n/2;
	}
	
	printf("%d" , bin);
	
	return 0;
}
