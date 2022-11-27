#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, i;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    int total;
    float percentage;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5.0;

    printf("Total marks: %d and average is %f\n", total, percentage);
    return 0;
}
