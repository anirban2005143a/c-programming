#include<stdio.h>

int power(int n , int p){
    if(p!=0){
        return n*power(n , p-1);
    }
    else{
        return 1;
    }
}

int recsum(int n, int p , int i){
    printf("%d\n" , power(-1 , i));
    if(n!=0){
        return (power(n,p)) + (power((-1),i))*(recsum(n-1,p,i+1));
    }
    else{
        return n;
    }
}

int main(){

    int n ,p ,i=0;
    printf("enter number: ");
    scanf("%d" , &n);
    printf("enter power: ");
    scanf("%d" , &p);

    int ans = recsum(n ,p ,i);
    printf("%d" ,ans);

    // printf("%d" , power(-1 , 1));

    return 0;
}