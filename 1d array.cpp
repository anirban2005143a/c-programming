#include<stdio.h>

int main(){
	int array[4];
	
	for(int i=0;i<=3;i++){
		printf("enter the %d element of array\n" , i);
		scanf("%d" , &array[i]);
	}
	
	for(int i=0;i<=3;i++){
		printf("the value of %d element of the array is %d\n" , i , array[i]);
	}
	
	return 0;
}
