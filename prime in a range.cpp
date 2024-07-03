#include<stdio.h>
#include<math.h>

void prime(int a , int b){
	int i,j;
	for(i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			printf("%d\n" , i);
		}
	}
}

int main(){
	
	int a,b;
	printf("enter the range: ");
	scanf("%d %d" , &a ,&b);
	prime(a,b);	
	
	return 0;
}
