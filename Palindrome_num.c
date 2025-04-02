#include<stdio.h>
int main(){
    int num, rev = 0, rem, org;

    printf("Enter a number:");
    scanf("%d", &num);
    org=num;

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 +rem;
        num /= 10;
    }

    if(org == rev){
        printf("%d is a palindrome number.", org);
    }
    else{
         printf("%d is not a palindrome number.", org);
    }
return 0;
}
