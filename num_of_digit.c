#include<stdio.h>
int main(){
    long long num;
    int count= 0;
    printf("Enter any number:");
    scanf("%lld", &num);
    do{
        num /= 10;
        ++count;
    }
    while( num != 0);

        printf("Number of digit is: %d", count);
return 0;
}
