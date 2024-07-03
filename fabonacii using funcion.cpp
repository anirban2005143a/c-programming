#include<stdio.h>


int fav(int n){
	
	int fnum =0;
	int secnum = 1;
	if(n == 1){
		return fnum;
	}
	else if(n == 2){
		return secnum;
	}
	else{
		int c = (fnum + secnum);
		fnum = secnum;
		secnum = c;
		return c;	
	}
}
int main(){
	int fnum = 0;
	int secnum = 1;
	int n;
	printf("enter a number: ");
	scanf("%d" , &n);
	
	for(int i =1;i<=n;i++){
		printf("%d " , fav(i));
	}
	
	
	return 0;
}
