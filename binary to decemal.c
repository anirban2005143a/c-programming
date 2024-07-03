#include<stdio.h>
#include<math.h>

int convert(int n){
	int dec=0,i=0;
	while(n!=0){
		int rem = n%10;
		dec+= rem * pow(2,i);
		n/=10;
		i++;
	}
	
	return dec;	
}

int main(){
	
	int n,i;
	int sum=0;
	printf("enter a binary number: ");
	scanf("%d" , &n);

//	for(i=0;n>=0;i++){
//		int lastdigit = n/10;
//		sum= sum+(lastdigit * pow(2,i));
//		n = n/10;
//	}

	printf("decemal number is: %d" , convert(n));

	return 0;
}