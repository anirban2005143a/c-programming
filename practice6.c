#include<stdio.h>

void transpose(int n ,int m, int arr[][m] ){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d " , arr[j][i]);
        }
        printf("\n");
    }
}

int main(){

    int n,m;
    printf("enter row no of the matrix: ");
    scanf("%d" , &n);
    printf("enter column no of the matrix: ");
    scanf("%d" , &m);

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter %d row and %d column element: " , i ,j);
            scanf("%d" , &arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }

    transpose(n,m,arr);

    return 0;
}