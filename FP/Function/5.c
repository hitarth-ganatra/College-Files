#include <stdio.h>
int multiplication();
int main(void){
    int result;
	result = multiplication();

    printf("%d", result);
}
int multiplication(){
    int x = 17, y = 18, multiplication;
    multiplication = x * y;
    return multiplication;
}