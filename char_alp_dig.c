/* program that will categorize a single character that will entered at the terminal,
whether it is an alphabet, a digit or a special character*/
#include<stdio.h>
int main(){
 char input;
 printf("Enter any character:");
 scanf("%c", &input);

 if(input>= 'A' && input<= 'Z' || input>= 'a' && input<= 'z'){
    printf("Alphabet\n");
 }else if(input>= '0' && input<= '9'){
    printf("Digit\n");
 }else{
   printf("Special Character\n");
 }
 return 0;
}
