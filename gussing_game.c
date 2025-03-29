#include<stdio.h>
int main(){
    int num, guess, trail=3, flag=0;
    printf("p-1, Pick a number:");
    scanf("%d", &num);

    printf("p-2, Guess-1:");
    scanf("%d", &guess);
    if(guess==num){
        flag=1;
        printf("Right,p2 wins!\n");
    } else{
        trail--;
        if(trail>0){
        printf("Wrong, 2 Chance(s) Left!\n");
        }
    }

      if(flag==0){
        printf("p-2, guess-2:");
        scanf("%d", &guess);
        if(guess==num){
            flag=1;
            printf("Right,p2 wins!\n");
        }else{
            trail--;
            if(trail>0){
            printf("Wrong, 1 Chance(s) Left!\n");
        }
      }
    }
        if(flag==0){
           printf("p-2, guess-3:");
           scanf("%d", &guess);
        if(guess==num){
            flag=1;
            printf("Right,p2 wins!\n");
        }else{
            printf("p-1 wins!n");
        }
       }

return 0;
}
