#include<stdio.h>

int main(){
	
	int row,col;
	printf("enter row no: ");
	scanf("%d" , &row);
	printf("enter col no: ");
	scanf("%d" , &col);

	for(int i=1 ; i<=row ; i++){
		if(i==1 || i==row){
			for(int j=1 ; j<=col ; j++){
				printf("* ");
			}
		}
		else{
			for(int k=1 ; k<=col ; k++){
				if(k==1 || k==col){
					printf("* ");
				}
				else{
					printf("  ");
				}
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
