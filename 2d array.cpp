#include<stdio.h>

int main(){
	int array[2][4] = {{1,2,3,4},{5,6,7,8}};
						
	for(int i=1;i<=2;i++){
		for(int j=1;j<4;j++){
			printf("the value array[%d][%d] is = %d\n" , i ,j , array[i][j] );
		}
	}	
	
	int a[4];
	for(int i=0;i<4;i++){
		printf("enter the %d element of array :" , i );
		scanf("%d" , &a[i]);
		printf("\n");
	}				
	for(int i=0;i<4;i++){
		printf("the valur of %d element of the array is : %d\n" , i ,a[i]);
	}
	
	return 0;
}
