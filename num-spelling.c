/* program that will take an interger of length one from the terminal
and display the digit in english*/

#include<stdio.h>
int main(){
int num;
printf("Enter any number(0-9):");
scanf("%D", &num);

if (num >=0){
    if(num== 0)
        printf("Zero");
     if(num== 1)
        printf("One");
         if(num== 2)
        printf("Two");
         if(num== 3)
        printf("Three");
         if(num== 4)
        printf("Four");
         if(num== 5)
        printf("Five");
         if(num== 6)
        printf("Six");
         if(num== 7)
        printf("Seven");
         if(num== 8)
        printf("Eight");
         if(num== 9)
        printf("Nine");
}

return 0;
}
