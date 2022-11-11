#include<stdio.h>
#include<stdlib.h>

int start();
int main()
{
    char choice;

    system("cls");
    printf("-------------------------------------------------------------------------------------\n");

    printf("\n              \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   Welcome to the quiz game.   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\n10 questions will be displayed. Each time you answer correct you gain 4 points for each question. Enjoy Playing");
    printf("\n\n\t\t\tDo you want to start the quiz ? (y/n)  ");
    
    scanf("%c", &choice);

    if (choice == 'y')
    {
        start();
    }
    else{
        system("color 04");
        printf("\n                Thank you for using the program. Waiting to see you again. \n");
        printf("-------------------------------------------------------------------------------------");
    }

    return 0;
}
int start(){
    char choice;
    int score = 0;
    
    system("cls");
    system("color 06");

    printf("1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        score++;
    }
        
    printf("\nThe program started and ended. \n");
    printf("-------------------------------------------------------------------------------------");
    return 0;
}