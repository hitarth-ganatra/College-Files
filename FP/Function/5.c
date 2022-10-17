#include <stdio.h>
int multiplication();
void main(){
    int result;
	result = multiplication();

    printf("%d", result);
}
int multiplication(){
    int x = 17, y = 18, multiplication;
    multiplication = x * y;
    return multiplication;
}