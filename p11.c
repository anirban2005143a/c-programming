#include<stdio.h>
#include<string.h>

int main(){

    char name[200];
    printf("enter a string:");
    gets(name);

    char str[100];
    printf("enter second string: ");
    gets(str);

    int a = strlen(name);
    int b = strlen(str);

    for(int i=a;i<(a+b);i++){
        name[i] = str[i-a];
    }

    for(int i=0;i<(a+b);i++){
        printf("%c" , name[i]);
    }

    return 0;
}