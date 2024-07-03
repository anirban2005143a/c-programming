#include<stdio.h>
#include<string.h>

typedef struct computersciencestudent{
    int roll;
    char name[100];
    float cgpa;
}cse;

int main(){

    cse s1;
    s1.roll = 4561;
    strcpy(s1.name , "anirban");
    s1.cgpa = 8.5;

    printf("%d" , s1.roll);

    return 0;
}