#include<stdio.h>

struct student
{
    int roll;
    char name[100];
    float cgpa;
};


int main(){

    struct student s1 = {123 , "anirban" , 9.5};

    struct student *ptr;
    ptr = &s1;

    printf("%s\n" , s1.name);
    printf("%s\n" , (*ptr).name);
    printf("%s\n" , ptr->name);

    return 0;
}