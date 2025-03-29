//program that will decide whether a number is positive or not

#include<stdio.h>
int main(){
int num;
printf("Enter any num:");
scanf("%d", &num);

if(num >=0){
    printf("Positive number");
}else{
    printf("Negative number");
}
return 0;
}
