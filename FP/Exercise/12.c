#include <stdio.h>
int adder();
void main(){
	int sum = adder();
    printf("The sum is %d", sum);
}
int adder(){
    int i, sum = 0;

    for(i=1; i<=10; i++){
        sum += i;
    }

    return sum;
}