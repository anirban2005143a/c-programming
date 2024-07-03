#include<stdio.h>

struct time_struc
{
    int hour;
    int min;
    int sec;
};


int main(){

    struct time_struc h1;

    printf("enter hour: ");
    scanf("%d" , &h1.hour);
    printf("enter min: ");
    scanf("%d" , &h1.min);
    printf("enter sec: ");
    scanf("%d" , &h1.sec);

    printf("%d:%d:%d" , h1.hour , h1.min , h1.sec);


    return 0;
}