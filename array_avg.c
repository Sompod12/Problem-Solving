#include<stdio.h>
int main(){
    int arr[100], size, sum=0, avg;

        printf("Enter the size of array:");
        scanf("%d", &size);

    for(int i = 0; i < size; i++){
        printf("Enter  %d number:", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

        avg = sum / size;
        printf("Average: %d", avg);
return 0;
}
