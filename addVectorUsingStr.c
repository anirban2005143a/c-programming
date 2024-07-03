#include<stdio.h>

struct vector{
    int x;
    int y;
};

void addvectors(struct vector s1 , struct vector s2 , struct vector sum){
    sum.x = s1.x + s2.x;
    sum.y = s1.y + s2.y;

    printf("x component is: %d\n" , sum.x);
    printf("y component is: %d" , sum.y);
}

int main(){

    struct vector s1={5,2};
    struct vector s2={4,8};
    struct vector sum = {0};

    addvectors(s1,s2,sum);

    return 0;
}