/* take input of the age of 3 people by user
and determine oldest and youngest among team*/

#include<stdio.h>
int main(){
int age1, age2, age3;
printf("Enter # person age:");
scanf("%d %d %d", &age1, &age2, &age3);

if(age1>age2 && age1>age3){
    printf("1st person is oldest\n");
}
else if(age2>age3 && age2>age1){
    printf("2nd person is oldest\n");
}
else{
     printf("3rd person is oldest\n");
}
if(age1<age2 && age1<age3){
    printf("1st person is youngest\n");
}
else if(age2<age3 && age2,age1){
    printf("2nd person is youngest\n");
}
else{
     printf("3rd person is youngest");
}
return 0;
}
