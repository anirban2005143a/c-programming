#include<stdio.h>

int main(){

    char name[100];
    gets(name);

    for(int i=0;name[i]!='\0';i++){
        name[i] = name[i] - 32;
    }

    puts(name);
    return 0;
}