#include<stdio.h>
int main (){
     int a,b,c;
     printf("Enter three sides of the triangle:");
     scanf("%d %d %d", &a , &b, &c);
     if(a+b <=c || a+c<=b || b+c <=a) {
        printf("Not a Triangle\n");
     }

     else if(a==b && b==c){
        printf("Equilateral Triangle\n");
     }
      else if(a==b || a==c || b==c){
        printf("Isosceles Triangle\n");
     }
     else{
        printf("Scalene Triangle");
     }
     return 0;
}
