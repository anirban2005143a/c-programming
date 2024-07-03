#include<stdio.h>

int fact(int a){
    int ans=1;
    for(int i=2;i<=a;i++){
        ans*= i;
    }
    return ans;
}

int main(){
    
    int n;

    printf("enter a number: ");
    scanf("%d" , &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int a;
            a = fact(i)/(fact(i-j) * fact(j));
            printf("%d " , a);
        }
        printf("\n");
    }

    return 0;
}