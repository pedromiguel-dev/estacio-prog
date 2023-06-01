#include <stdio.h>
#include <string.h>

typedef char string[20];

typedef struct 
{
    string name;
    int score;

} Player;

void print_player(Player player)
{
    printf("Player name: %s\n", player.name);
    printf("Player score: %d\n\n", player.score);
}

int main(int argc, char const *argv[])
{
    Player Player1;
    Player Player2;

    strcpy(Player1.name, "Pedro Miguel");
    Player1.score = 100;

    strcpy(Player2.name, "Maria");
    Player2.score = 200;

    print_player(Player1);
    print_player(Player2);
    
    return 0;
}
