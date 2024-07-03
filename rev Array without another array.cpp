#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=5/2 ; i++){
		int a = arr[i];
		arr[i]=arr[4 - i];
		arr[4 - i] = a;
	}
	
	for(i=0;i<5 ; i++){
		printf("%d " , arr[i]);
	}
	return 0;
}
