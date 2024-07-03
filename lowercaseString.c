#include<stdio.h>
#include<string.h>

int main(){

    // char name[100];

    // gets(name);

    // for(int i=0;name[i]!='\0';i++){
    //     if(name[i]>'A' || name[i]<'Z'){
    //         name[i] = name[i] + 32;
    //     }
    // }

    // puts(name);

    char name[100];
    gets(name);
    puts(strlwr(name));

    return 0;
}