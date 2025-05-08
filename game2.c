#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int rpsgame(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
}

int main()
{
    int number;
    char you, comp;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'r';
    }
    // printf("The number is %d", number);
    printf("enter the 'r' for rock 'p' for paper 's' for scissor : \n");
    scanf("%c", &you);
    int result = rpsgame(you, comp);
    if (result == 0)
    {
        printf("**** MATCH DRAW ****");
    }
    else if (result == 1)
    {
        printf("you choose %c  and computer choose %c \n", you, comp);
        printf("*** YAYYY!!! YOU WIN");
    }
    else 
    {
        printf("you choose %c  and computer choose %c \n", you, comp);
        printf("*** oopppss!!! YOU LOOSE");
    }

    return 0;
}
