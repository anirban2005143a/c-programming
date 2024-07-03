#include<stdio.h>
#include<stdlib.h>

int main(){

    // int *ptr;
    // ptr = (int *) malloc(5 * sizeof(int));

    // ptr[0]=1;
    // ptr[1]=2;
    // ptr[2]=3;
    // ptr[3]=4;
    // ptr[4]=5;

    // for(int i=0;i<5;i++){
    //     printf("%d\n" , ptr[i]);
    // }

    int n;
    printf("enter a number: ");
    scanf("%d" , &n);

    int *ptr;
    ptr = (int *) calloc(n , sizeof(int));

    for(int i=0;i<n;i++){
        printf("%d\n"  , ptr[i]);
    }

    free(ptr);

    ptr = (int *) calloc(2 , sizeof(int));
    for(int i=0;i<2;i++){
        printf("%d\n" , ptr[i] );
    }

    return 0;
}