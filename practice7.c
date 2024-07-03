#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    printf("enter string: ");
    gets(str);
    int len = strlen(str);
    int i=0;

    for(i=0;i<=(len/2);i++){
        if(str[i] != str[len-1-i]){
            printf("not a polindromic string.");
            break;
        }
    }

    if(i == ((len/2)+1)){
        printf("polindromic string.");
    }

    return 0;

}