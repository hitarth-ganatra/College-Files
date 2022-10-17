#include <stdio.h>
void prime(int num);
void main(){
	int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);

    prime(num);
}
void prime(int num){
    int i, counter = 0;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            counter++;
        }
        if (counter == 2)
        {
            printf("PRIME\n");
        }    
        else{
            printf("NOT PRIME\n");
        }
    }
    
}