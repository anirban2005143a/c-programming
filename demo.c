#include<stdio.h>

int main(){

    char str[] = "San Francisco 521324";

    printf("%20.16s\n" , str);
    printf("%0.16s" , str);

    return 0;
}