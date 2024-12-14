#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[50];
    } pokemon;
    typedef struct legendarypokemon{
    pokemon normal;
    char ability[15];
    } legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=30;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.speed=180;
    mewtwo.normal.tier='S';
     printf("Name: %s\n", mewtwo.normal.name);
    printf("Ability: %s\n", mewtwo.ability);
    printf("HP: %d\n", mewtwo.normal.hp);
    printf("Attack: %d\n", mewtwo.normal.attack);
    printf("Speed: %d\n", mewtwo.normal.speed);
    printf("Tier: %c\n", mewtwo.normal.tier);
    return 0;
}