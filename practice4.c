#include<stdio.h>

int main(){

    int n;
    int arr[n];
    printf("enter a number: ");
    scanf("%d" , &n);

    for(int i=0;i<n;i++){
        printf("enter %d element of the array: " , i);
        scanf("%d" ,&arr[i]);
    }

    for(int i=0;i<n;i++){
        int term = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = term;
    }

    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }

    return 0;
}