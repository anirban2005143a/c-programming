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
	
	int max = arr[0];
	int min = arr[0];
	
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		else if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("maximum is %d and minimun is %d" , max , min);
	return 0;
}
