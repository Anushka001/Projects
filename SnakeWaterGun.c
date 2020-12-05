#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char comp)
{
    if(you == comp)
    {
        return 0;
    }
    if(you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if(you == 'w' && comp == 'g')
    {
        return 1;
    }
    if(you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100+1;

    if(number<33)
    {
        comp = 's';
    }
    if(number>33 && number<66)
    {
        comp = 'w';
    }
    if(number>66)
    {
        comp = 'g';
    }

    printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun:\n");
    scanf("%c",&you);
    int result = SnakeWaterGun(you,comp);

    if(result == 0)
    {
        printf("It's a Draw!!");
    }
    else if(result == -1)
    {
        printf("Computer wins!!");
    }
    else
    {
        printf("You win!!");
    }
    printf("\nYou chose %c and Comp chose %c", you, comp);
    
    return 0;
    
}