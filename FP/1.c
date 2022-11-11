#include<stdio.h>
#include<stdlib.h>

int start();
int thanks();
int result(int score);

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
        thanks();
    }

    return 0;
}
int start(){
    char choice;
    int score = 0;
    
    system("cls");
    system("color 06");

    // 1st Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }
    
    // 2nd Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 3rd Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 4th Question
    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }
    
    // 5th Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 6th Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 7th Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 8th Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 9th Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    // 10th Question

    printf("\n1. First Question\n\n");

    printf("A. Answer 1\n");
    printf("B. Answer 2\n");
    printf("C. Answer 3\n");
    printf("D. Answer 4\n\n");

    printf("Enter your choice ( A / B / C / D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        printf("\nCongrats. You have entered exactly the correct answer. Score is increased by 10 !!!!\n");
        score+=10;
    }
    else{
        printf("\nSorry, You have entered the wrong answer !!");
    }

    result(score);
    printf("-------------------------------------------------------------------------------------");
    return 0;
}

int thanks(){
    system("color 04");
    printf("\n                Thank you for using the program. Waiting to see you again. \n");
    printf("-------------------------------------------------------------------------------------");
    return 0;
}

int result(int score){
    if (score >= 50)
    {
        printf("\nGood. Well done you have scored a total of %d.\n\n", score);
    }
    else if(score >= 80)
    {
        printf("\nGood Game player. You have got total of %d.\n\n", score);
    }
    else if(score >= 90){
        printf("\nSuperb !! You are rocking. You have got total of %d.\n\n", score);
    }
    else{
        printf("\nNice Try. You have got total of %d.\n\n", score);
    }
}