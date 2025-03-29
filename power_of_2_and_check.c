/*program that will read from the console a random number
and check if it is a non zero positive number. if the check is yes,
 it will determinne if the number is a power of 2

 if the check fails the program will check for two more cases .
 if the number is zero,  the program will print "Zero is not a valid input".
 else it will print "Negative input is not valid". */

#include<stdio.h>
int main(){
int num;
printf("Enter any number:");
scanf("%d", &num);

if(num>0){
    if ((num & (num-1))==0){
    printf("yes\n");
}else{
    printf("no\n");
}
}else if (num==0){
    printf("Zero is not a valid input\n");
}else{
    printf("Negative input is not valid\n");
}
return 0;
}
