/*program that will evaluate simple expressions of the from-
<number> <operator> <number>
where operators are(+, -, *, /)*/

#include<stdio.h>
int main(){
float x, y, res=0;
char op;
printf("Enter:");
scanf("%f %c %f", &x, &op, &y);

if(op=='+'){
    res= x+y;
    printf("%f\n", res);
}else if(op=='-'){
    res= x-y;
    printf("%f\n", res);
}else if(op=='*'){
    res= x*y;
    printf("%f\n", res);
}else if(op=='/'){
    if(y!=0){
    res= x/y;
    printf("%f\n", res);
    }
    else{
      printf("not valid!");
    }
}else{
    printf("Inalid!");
}

return 0;
}
