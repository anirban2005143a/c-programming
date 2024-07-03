#include<stdio.h>

int main(){

    int a,b,i;

    printf("enter the lower range: ");
    scanf("%d" , &a);
    printf("enytre the upper range: ");
    scanf("%d" , &b);

    for(i=a;i<=b;i++){
        int j;

        for(j=2;j<i;j++){
            if(i%j == 0){
                break;
            }
        }

        if(j == i){
            printf("%d " , i);
        }
    }

    return 0;
}