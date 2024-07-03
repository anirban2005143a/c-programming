#include<stdio.h>

void addarray(int arr1[],int arr2[] , int n1 ,int n2){
	int n=n1+n2;
	int i , arr[n];
	for(i=0;i<n1;i++){
		arr[i]=arr1[i];
	}
	for(i=n1;i<n;i++){
		arr[i] = arr2[i-n1];
	}
	
	for(i=0;i<n;i++){
		printf("%d " , arr[i]);
	}
}

int main(){
	
	int n1,n2,i;
	printf("enter length of array1: ");
	scanf("%d" , &n1);
	
	int arr1[n1];
	for(i=0;i<n1;i++){
		printf("enter %d element of array1: " , i);
		scanf("%d" , &arr1[i]);
	}
	
	
	printf("enter length of array2: ");
	scanf("%d" , &n2);
	int arr2[n2];
	for(i=0;i<n2;i++){
		printf("enter %d element of array2: " , i);
		scanf("%d" , &arr2[i]);
	}
	
	addarray(arr1,arr2,n1,n2);
	
	return 0;
}
