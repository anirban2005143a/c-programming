#include<stdio.h>

int main(){

    int n;
    printf("enter array length: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter %d element of the array: " , i);
        scanf("%d" ,&arr[i]);
    }

    int term;
    printf("enter your searched term: ");
    scanf("%d" , &term);

    for(int i=0;i<n;i++){
        if(term == arr[i]){
            printf("your number is in %d position and its frequency is %d" , i+1 , i); 
        }
    }

    return 0;
}