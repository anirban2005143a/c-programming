#include<string.h>

int compare(char s1[] , char s2[] , int n){
    for(int i=0 ; s1[i]!='\0' || s2[i]!='\0';i++){
        if(s1[i] != s2[i]){
            n = -1;
            break;
        }
    }

    if(n== -1){
        return -1;
    }
    else{
        return 1;
    }
}

int main(){

    char s1[100];
    char s2[100];
    int flag;

    printf("enter s1:");
    gets(s1);
    printf("enter s2:");
    gets(s2);

    if(compare(s1 , s2 , flag) == 1){
        printf("same");
    }
    else{
        printf("different");
    }

    

    return 0;
}