#include<stdio.h>

void checknumbers(int *ptr , int n){
    for(int i=0;i<6;i++){
        if((*(ptr+i))%2 == 0){
            printf("%d\t" , *(ptr+i));
        }
    }

    for(int i=0;i<6;i++){
        if((*(ptr+i))%2 !=0){
            printf("\n%d\t" , *(ptr+i));
        }
    }
}

int main(){

    int arr[6] = {1,2,3,4,5,6};

    checknumbers(&arr,6);

    return 0;
}