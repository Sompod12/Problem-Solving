// program that will check whether a triangle is valid or not

#include<stdio.h>
int main (){
float a1, a2, a3;
printf("Enter any 3 number:");
scanf("%f %f %f", &a1, &a2, &a3);
float sum = a1+a2+a3;
 if(a1>0 && a2>0 && a3>0 && a1<180 && a2< 180 && a3<180){
    if(sum==180){
        printf("It is a triangle\n");
    }else{
        printf("Not a triangle");
    }
}else{
        printf("Not a triangle");}
return 0;
}
