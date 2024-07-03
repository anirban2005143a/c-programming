#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("enter a binary number: ");
	scanf("%d" , &n);
	
	int i=0,rem,dec=0;
	
	while(n>0){
		rem=n%10;
		dec = dec + (rem*(pow(2,i)));
		n=n/10;
		i++;
	}
	printf("%d" , dec);
	return 0;
}
