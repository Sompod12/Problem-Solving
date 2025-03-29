#include<stdio.h>
int main()
{
    float mark;
    printf("Enter mark(0-100):");
    scanf("%f",&mark);
    if( mark <0 || mark >100){
        printf("Invalid marks\n");
    }
    else if(mark >=90 && mark <=100){
        printf("Grade: A+\n");
    }
    else if(mark >=80 && mark <=89){
        printf("Grade: A\n");
    }
    else if(mark >=70 && mark <=79){
        printf("Grade: B\n");
    }
    else if( mark >=60 && mark <=69){
        printf("Grade: C\n");
    }
    else if(mark >=50 && mark <=59){
        printf("Grade: D\n");
    }
    else {
        printf("Grade: Fail\n");
    }
    return 0;
}
