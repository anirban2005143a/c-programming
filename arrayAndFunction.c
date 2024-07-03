#include<stdio.h>

void printarray(int arr[] , int n){
    for(int i =0;i<n ; i++){
        printf("%d\t" , arr[i]);
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};

    printarray(arr , 5);

    return 0;
}