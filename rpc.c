/* Rock Paper Scissors game in C */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration of vars
    int ai,score1,score2,turns=0,n;
    int player;
    time_t t;

    //Welcome messages
    printf("Welcome to Rock Paper Scissors! \n");
    printf("Please note your moves: \n Rock-0 \n Paper-1 \n Scissors-2 \n");
    printf("Enter the number of turns: \n");
    scanf("%d",&n);
    printf("\n");

    //Initialization of RNG seed
    srand((unsigned) time(&t));
    
    while (turns<n) {
    
    printf("Enter your move: \n");

        //Input
        scanf("%d",&player);
        ai = rand()%3;
        turns+=1;
        
        //Print the ai
        if (ai==0)
        printf("AI drew Rock! \n");
        else if (ai==1)
        printf("AI drew Paper! \n");
        else if (ai==2)
        printf("AI drew Sciccors! \n");
        
        //Logic for draw
        if (ai==player)
        {
            printf("It's a draw! \n");
            printf("\n");
        }

        //Logic for Rock
        else if ((ai==0)&&(player==1))
        {
            printf("Your point! \n");
            printf("\n");
            score1+=1;
        }
        else if ((ai==0)&&(player==2))
        {
            printf("AI's point! \n");
            printf("\n");
            score2+=1;
        }

        //Logic for Paper
        else if ((ai==1)&&(player==0))
        {
            printf("AI's point! \n");
            printf("\n");
            score2+=1;
        }
        else if ((ai==1)&&(player==2))
        {
            printf("Your point! \n");
            printf("\n");
            score1+=1;
        }

        //Logic for Scissor
        else if ((ai==2)&&(player==0))
        {
            printf("Your point! \n");
            printf("\n");
            score1+=1;
        }
        else if ((ai==2)&&(player==1))
        {
            printf("AI's point! \n");
            printf("\n");
            score2+=1;
        }

    }
    
    printf("\n");

        //Final Score
        if (score1>score2)
        printf("You won the game! Your score is %d",score1);
        else if (score2>score1)
        printf("You lost the game! Your score is %d",score1);
        else if (score1==score2)
        printf("The game is drawn!");

    return 0;

}

/* End of program */
