#include<stdio.h>

int main(){
	
	int n;
	printf("enter any number: ");
	scanf("%d" , &n);
	
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(j>=n-i){
				printf("*");
			}
			else if(j<n-i){
				printf("%d" , j);
			}
		}
		printf("\n");
	}
	
	return 0;
}
