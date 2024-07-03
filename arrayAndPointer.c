#include<stdio.h>

int findodd(int arr[] , int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 !=0){
            count++;
        }
    }
    return count;
}

int main(){

    int arr[] = {1,2,3,4,5};

    printf("%d" , findodd(arr , 5));

    return 0;
}