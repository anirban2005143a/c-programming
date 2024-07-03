#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<(6/2);i++){
        int term = arr[i];
        arr[i] = arr[6-1-i];
        arr[6-1-i] = term;
    }

    for(int i=0;i<6;i++){
        printf("%d\t" , arr[i]);
    }

    return 0;
}