#include<stdio.h>
int main(){
    long long num;
    int rev = 0, rem;

    printf("Enter a number:");
    scanf("%lld", &num);

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 +rem;
        num /= 10;
    }
    printf("Reverse Number: %d", rev);
return 0;
}
