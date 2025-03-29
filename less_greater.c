/*program that will take two numbers x and y as input
  and decided whether x is greaterthan/ lessthan/ equal to y*/

#include<stdio.h>
int main(){
  int x, y;
  printf("Enter two number:");
  scanf("%d %d", &x, &y);

  if(x>y){
    printf("%d is greater than %d\n", x, y);
  }else if(x<y){
     printf("%d is less than %d\n", x, y);
  }else{
      printf("%d equal %d\n", x, y);
  }
return 0;
}


