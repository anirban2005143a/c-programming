#include<stdio.h>

int main(){

    int n;
    printf("enter:");
    scanf("%d" ,&n);

    int arr[n+1];

    for(int i=0;i<n;i++){
        printf("%d element: " , i);
        scanf("%d" , &arr[i]);
    }

    int a;
    printf("enter input: ");
    scanf("%d" , &a);
    int term[n],count;

    for(int i=0;i<n;i++){
        if(a<arr[i]){
            // printf("hello");
            term[0] = arr[i];
            arr[i]=a;
            count =i;
            break;
        }
        else{
            continue;
        }
    }

    for(int i=1;(count+i)!=(n+1);i++){
        term[i] = arr[count+i];
        arr[count+i] = term[i-1];
    }

    for(int i=0;i<(n+1);i++){
        printf("%d " , arr[i]);
    }

    return 0;
}