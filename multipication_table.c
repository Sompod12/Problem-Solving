#include<stdio.h>
int main(){
    int num, range;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("declare range:");
    scanf("%d", &range);

    for(int i=1; i<=range; i++){
        printf("%d*%d = %d\n", num, i, num*i);
    }
return 0;
}
