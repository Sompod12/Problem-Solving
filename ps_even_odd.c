/*write a c program to input any number and check weather it is even or odd.
if it is even check greater than of your id's last 2 digit or not.
if it is odd check greater than of your id's last 2 digit or not. */

#include<stdio.h>
int main (){
int num;
printf("Enter an integer number:");
scanf("%d", &num);

if(num %2 == 0){
    printf("Even\n");
    if(num>26){
        printf("Greater than my id\n");
    }
    else{
        printf("Less than my id");
    }
}
else{
    printf("odd\n");
    if(num<26){
        printf("Less than my id\n");
    }
    else{
        printf("Greater than my id");
    }
}


return 0;
}

