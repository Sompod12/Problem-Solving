#include<stdio.h>
int main(){
    int n1=0, n2=1, next, n;
    next= n1+n2;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("Fibonacci: %d %d ", n1, n2);

    for(int i=3; i<=n; i++){
        printf("%d ", next);
        n1=n2;
        n2=next;
        next=n1+n2;
    }
return 0;
}
