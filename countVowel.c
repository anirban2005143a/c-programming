#include<stdio.h>
int main(){
    char name[100] = "anirban";
    int count=0;

    for(int i=0;name[i] != '\0';i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ){
            count ++;
        }
    }

    printf("%d" , count);

    return 0;
}