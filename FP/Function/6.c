#include <stdio.h>
int min();
void main(){
    int minimum;
    minimum = min(16, 23, 46);
    printf("Minimum Number is %d", minimum);
}
int min(int a, int b, int c){
    int numbers[3] = {a,b,c};
    int i, min;
    
    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            min = numbers[0]; 
        }
        else if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;    
}