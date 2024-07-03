#include<stdio.h>

int main(){
	int n;
	printf("enter a number: ");
	scanf("%d" , &n);
	int fnum = 0;
	int secnum = 1;
	printf("%d " , fnum);
	printf("%d " , secnum);
	for(int i=1;i<=n-2;i++){	
		printf("%d " , fnum+secnum);
		fnum++;
		secnum++;
	}
	
	return 0;
}
