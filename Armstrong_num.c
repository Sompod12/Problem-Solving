#include<stdio.h>
#include<math.h>
int main(){
    int num, originalnum, result = 0, remainder, n = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    originalnum = num;

    while(originalnum != 0){
        originalnum /= 10;
        n++;
    }

    originalnum = num;
    while(originalnum != 0){
        remainder = originalnum % 10;
        result = result + pow( remainder , n);
        originalnum /= 10;
    }

    if(result == num){
        printf("%d is a armstrong number.", num);
    }
    else{
        printf("%d is not a armstrong number.", num);
    }
return 0;
}
