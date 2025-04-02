#include<stdio.h>
int main(){
    int num, flag = 0;
    printf("Enter an positive integer:");
    scanf("%d", &num);

    if(num == 0 || num == 1){
        flag = 1;
    }

    for( int i = 2; i<= num/2; i++){
        if(num % i == 0){
            flag=1;
            break;
        }
    }

    if(flag == 0){
        printf("Prime number.");
    }
    else{
        printf("Not prime.");
    }
return 0;
}
