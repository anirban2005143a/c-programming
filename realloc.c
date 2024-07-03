#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int *) calloc(5 , sizeof(int));

    for(int i=0;i<5;i++){
        printf("enter %d elemnet : " , i);
        scanf("%d" , &ptr[i]);
    }

    ptr = realloc(ptr , 8);
    for(int i=0;i<8;i++){
        printf("enter %d elemnet : ",i);
        scanf("%d" , (ptr + i));
    }

    for(int i=0;i<8;i++){
        printf("%d elemnet is:%d\n" , i , ptr[i]);
    }

    return 0;
}