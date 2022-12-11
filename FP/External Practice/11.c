#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Checking if a string is palindrome

    char str[100];
    int i, j, len = 0, flag = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    // printf("%d\n\n", len);
    // printf("%d\n\n", strlen(str));
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }    
    return 0;
}
