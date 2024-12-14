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
    } pokemon;
    typedef struct legendarypokemon{
    pokemon normal;
    char ability[15];
    } legendarypokemon;
    typedef struct godpokemon
    {
       legendarypokemon legend;
       int specialattack;
    } godpokemon;
    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability,"Turn Anyone to stone");
    arceus.legend.normal.attack=200;
    return 0;
}
    