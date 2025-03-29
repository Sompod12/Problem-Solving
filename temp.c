#include<stdio.h>
int main()
{
    int temp;
    printf("Enter any temperature:");
    scanf("%d",&temp);
    if( temp <0){
        printf("Freezing Weather\n");
    }
    else if(temp >0 && temp <=10){
        printf("Very cold Weather\n");
    }
    else if(temp >10 && temp <=20){
        printf("Cold weather\n");
    }
    else if(temp >20 && temp <=30){
        printf("Normal weather\n");
    }
    else if( temp >30 && temp <=40){
        printf("Hot weather\n");
    }
    else {
        printf("Very hot weather");
    }
    return 0;
}
