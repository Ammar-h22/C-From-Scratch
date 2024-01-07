#include <stdio.h>

int main()
{
    int no_players = 2;
    int no_rounds = 3;
    int game[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the points that player %d has scored in round %d : \n", i + 1, j + 1);
            scanf("%d", &game[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Player %d has scored %d points in round %d\n", i + 1, game[i][j], j + 1);
        }
    }

    return 0;
}