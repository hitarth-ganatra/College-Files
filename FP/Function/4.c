#include <stdio.h>
int swap();
void main(){
	swap();
}
int swap(){
    int x = 10, y = 20;
    // x = x + y = 10+20 = 30
    // y = x - y = 30 - 20 = 10
    // x = x - y = 30 - 10 = 20

    printf("The value of x before swapping is %d and the value of y before swapping is %d.\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("The value of x after swapping is %d and the value of y after swapping is %d.\n", x, y);
}