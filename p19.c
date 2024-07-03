#include<stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

int checkleap(int n){
    if(n%4 == 0 || n%400 == 0 ){
        return 1;
    }
    else{
        return 0;
    }
}


int febDate(int year , int date){
    if(checkleap(year) == 1){
        if(date <= 29){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(date<=28){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int dateMonth(int month , int date){
    if(month%2 == 0){
        if(date<=30){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(date<=31){
            return 1;
        }
        else{
            return 0;
        }
    }
}


void printdate(int year , int month , int date){
    if(month == 1) {
        char a[]="January";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 2) {
        char a[]="February";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 3) {
        char a[]="march";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 4) {
        char a[]="april";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 5) {
        char a[]="may";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 6) {
        char a[]="june";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 7) {
        char a[]="july";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 8) {
        char a[]="august";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 9) {
        char a[]="september";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 10) {
        char a[]="october";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 11) {
        char a[]="november";
        printf("%s %d , %d" , a , date , year);
    }
    else if(month == 12) {
        char a[]="december";
        printf("%s %d , %d" , a , date , year);
    }
    
}


int main(){

    struct date d1;
    printf("enter your dates: ");
    scanf("%d %d %d\n" , &d1.date , &d1.month , &d1.year);

    if(d1.month == 2){
        if(febDate(d1.year , d1.date) == 1){
            printdate(d1.year , d1.month , d1.date);
        }
        else{
            printf("invalid date");
        }
    }
    else{
        if(dateMonth(d1.month , d1.date) == 1){
            printdate(d1.year , d1.month , d1.date);
        }
        else{
            printf("invalid date");
        }
    }

    return 0;
}