#include<stdio.h>

int main(){
	
	int n = 5;
	int arr[5] = {1,2,3,4,5};

	// for(int i=0;i<n;i++){
	// 	printf("enter %d value of array: " , i);
	// 	scanf("%d" , arr[i]);
	// }

	int term = 4;
	printf("enter a number: ");
	scanf("%d" , term);

	for(int i=0;i<n;i++){
		if(arr[i] == term){
			printf("element is in the array.");
			break;
		}
	}
	
	return 0;
}
