#include <stdio.h>

void main(){
    int arr[5], max = 0, i;
    for(int i=0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        if(arr[i] > max) max = arr[i];
    }
    printf("\nThe largest number is %d", max);
}