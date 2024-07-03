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
	
	int sum=0;
	for(i=0;i<n;i++){
		sum = sum + arr[i];
	}
	printf("%d" , sum);
	
	return 0;
}
