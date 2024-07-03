#include<stdio.h>

void swap(int *a , int *b){
	int c =*a;
	*a = *b;
	*b = c;
	return ;
}
int main(){
	int a=10 , b=20;
	printf("%d and %d\n" , a ,b);
	swap(&a ,&b);
	printf("%d and %d " , a , b);
	return 0;
}
