#include <stdio.h>
int isPrime(int num);
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number", num);
    }
}

int isPrime(int num){
    int i;
    for(i=2; i<num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}