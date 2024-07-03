#include<stdio.h>
void func1(int *p){
	
	for(int i=0;i<5;i++){
		printf("the value of %d is %d\n" , i , *(p+i));
	}
	*(p+2) = 204;
}
int main(){
	int arr[] = {1,2,3,4,5};
	func1(arr);
	func1(arr);
	return 0;
}
