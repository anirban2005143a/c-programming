#include<stdio.h>
int func1(int array[]){
	for(int i=0;i<5;i++){
		printf("the value of %d is %d\n" , i , array[i] );
	}
	array[0]=204;
}
int main(){
	
	int arr[] = {1,2,3,4,5};
	func1(arr);
	printf("the value of 0 is %d\n" , arr[0]);
	return 0;
}
