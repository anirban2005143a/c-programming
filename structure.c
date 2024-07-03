#include<stdio.h>
#include<string.h>

struct details
{
    int roll;
    char name[100];
    float cgpa;
};


int main(){

    // struct details s1;
    // s1.roll = 1234;
    // s1.cgpa = 8.77;
    // strcpy(s1.name , "anirban");

    // printf("name is : %s\n" , s1.name);
    // printf("roll is : %d\n" , s1.roll);
    // printf("cgpa is : %f\n" , s1.cgpa);

    // struct details info[100];
    // info[0].cgpa = 8.77;
    // info[0].roll = 1234;
    // strcpy(info[0].name , "anirban");

    // printf("name is: %s\n" , info[0].name);
    // printf("roll is: %d\n" , info[0].roll);
    // printf("cgpa is : %f\n" , info[0].cgpa);

    struct details s1 = {1234 , "anirban" , 8.77};
    struct details s2 = {1524 , "soumya" , 8.90};

    printf("name is : %s\n" , s1.name);
    printf("roll is : %d\n" , s1.roll);
    printf("cgpa is : %f\n" , s1.cgpa);

    
    printf("name is : %s\n" , s2.name);
    printf("roll is : %d\n" , s2.roll);
    printf("cgpa is : %f\n" , s2.cgpa);




    return 0;
}