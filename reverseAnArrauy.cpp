#include<stdio.h>

int main(){
	
	int n;
	printf("enter array length: ");
	scanf("%d" , &n);
	
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("enter %d element of arr: " , i);
		scanf("%d"  , &arr[i]);
	}
	
	int reverse[n];
	for(i=0;i<n;i++){
		reverse[i] = arr[n-1-i];
	}
	
	for(i=0;i<n;i++){
		printf("%d" , reverse[i]);
	}
	
	return 0;
}
