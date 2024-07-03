#include <stdio.h>

int main()
{

    // char name[100];
    // int count = 0;
    // gets(name);

    // for(int i=0;name[i]!='\0';i++){
    //     if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' ){
    //         count++;
    //     }
    // }

    // printf("number of vowel is = %d" , count);

    // return 0;

    // int i = 15;
    // i = (i > 14);
    // printf("i= %d", i);
    // return 0;

    // int arr[]={5,6,7,8,9};

    // for(int i=5;i<=2;i--){
    //     arr[i-1] = arr[i-2];
    //     printf("hello");
    //     printf("%d\n" , arr[i-1]);
    // }

    // for(int i=0;i<5;i++){
    //     printf("%d\t" , arr[i]);
    // }

    // int a = 5, c = 2, d = 4, x = 6;
    // float ans;
    // ans = 10.2 / a + (2 * a + (3 * c + 4) / a * d / (12 / x));
    // printf("%f", ans);
    // return 0;

    // int i=0 , j=0;

    // while(j<10){
    //     j++;
    //     i+=3;
    // }
    // printf("%d %d" ,i, j);

    // int x[50], i;
    // for (i = 1; i <= 50; i++){
    // x[i] = i;
    // printf("%d ", x[i]);
    // }
    // return 0;


    for(int i=0;i<5;i++){
        for(int j=0 ; j<5;j++){
            printf("hello\t");
            if(i == 1){
                break;
            }
        }
        printf("\n");
    }
}