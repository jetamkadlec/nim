#include <stdio.h>
#include <stdlib.h>

void main()
{
    int MatchesLeft = 21;
    int ToRemove = 0;
    while(MatchesLeft>1)
    { //1st player´s turn
    printf("%d matches remaining\n", MatchesLeft);
    printf("Player 1, how many matches do you want to remove?(1,2 or 3)\n");
    scanf("%d", &ToRemove); //player 1 decides how many matches to remove
    MatchesLeft = MatchesLeft - ToRemove; //removes matches

    if (MatchesLeft == 1){
        printf("You lose, player 1"); //win check
    }
    else
    {     //2nd player´s turn
        int ToRemove = 0;
         printf("%d matches remaining\n", MatchesLeft);
        printf("Player 2, how many matches do you want to remove?(1,2 or 3)\n");
    scanf("%d", &ToRemove); //player 2 decides how many matches to remove
    MatchesLeft = MatchesLeft-ToRemove;
        if (MatchesLeft == 1){
        printf("You lose, player 2"); //win check
    }
    }
    }
    return 0;
}
