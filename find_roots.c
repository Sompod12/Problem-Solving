// C program to find  the roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main(){
 double a, b, c, dis, root1, root2, realpart, imapart;
 printf("Enter the value of a,b,c: ");
 scanf("%lf %lf %lf", &a, &b, &c);

 dis = b*b - 4*a*c;

 if(dis>0){
    root1= (-b+sqrt(dis))/ (2*a);
    root2= (-b-sqrt(dis))/ (2*a);
    printf("root1: %.2lf and root2: %.2lf", root1, root2);
   }
 else if(dis==0){
    root1=root2= (-b)/(2*a);
    printf("root1: %.2lf and root2: %.2lf", root1, root2);
 }
 else {
    realpart = (-b) / (2.0 * a);
    imapart = sqrt(-dis) / (2.0 * a);
    printf("root1: %.2lf + %.2lfi and root2: %.2lf - %.2lfi\n", realpart, imapart, realpart, imapart);
}

return 0;
}
