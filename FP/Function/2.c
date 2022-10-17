#include <stdio.h>
void message();
void main(){
    int i;
    for (i = 1; i <= 5; i++)
    {
        message();
    }
}
void message(){
    printf("Hello !!!\n");
}