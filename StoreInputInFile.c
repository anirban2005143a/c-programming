#include<stdio.h>

int main(){

    // char name[100];
    // int roll;
    // float cgpa;

    // printf("enter your name: ");
    // gets(name);
    // printf("enter your roll no: ");
    // scanf("%d" , &roll); 
    // printf("enter your cgpa: ");
    // scanf("%f" , &cgpa);

    // FILE *fptr;
    // fptr = fopen("record.txt" , "w");

    // fprintf(fptr , "name is: %s\n" , name);
    // fprintf(fptr , "roll is: %d\n" , roll);
    // fprintf(fptr , "cgpa is: %0.2f\n" , cgpa);

    // fclose(fptr);

    FILE *fptr;
    fptr = fopen("record.txt" , "w");

    int n;

    printf("enter a number: ");
    scanf("%d" , &n);

    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            fprintf(fptr , "%d " , i);
        }
    }

    fclose(fptr);

    return 0;
}