#include<stdio.h>

void printarray(int arr[][3] , int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int arr[2][3]={{1,2,3},{4,5,6}};

    printarray(arr , 2,3);

    return 0;
}