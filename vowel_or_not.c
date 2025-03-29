/* Write a c program to input any alphabet
and check weather it is a vowel or consonent*/

#include<stdio.h>
int main(){
char al;
printf("Enter any alphabet:");
scanf("%c", &al);

if (al=='a' || al=='e' || al=='i' || al=='o' || al=='u' ||al=='A' || al=='E' || al=='I' || al=='O' || al=='U' ){
        printf("%c is a vowel\n", al);
    }
    else{
        printf("%c is a consonent\n", al);
    }



return 0;
}
