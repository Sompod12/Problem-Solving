//Write a c program to find either a given year is leap year or not

#include<stdio.h>
int main(){
int year;
printf("Enter any year:");
scanf("%d", &year);

if ((year%4==0 && year%100!=0) || year%400==0){

    printf("Leap year\n");
}
else{
    printf("Not a Leap year");
}
return 0;
}
