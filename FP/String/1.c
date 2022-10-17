#include<stdio.h>

int main()
{
    int i;
    char name[6] = {'C','M','P','I','C','A'};
    for (i = 0; i < 6 ; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    char name2[8] = {'C','H','A','R','U','S','A','T'};
    for (i = 0; i < 8 ; i++)
    {
        printf("%c", name2[i]);
    }
    
    return 0;
}
