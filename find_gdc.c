#include<stdio.h>
int main(){
    int n1, n2, gdc;
    printf("Enter two number:");
    scanf("%d %d", &n1, &n2);

    for(int i = 1; i <= n1 && i <= n2; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gdc=i;
        }
    }
    printf("GDC: %d", gdc);
return 0;
}
