#include<stdio.h>
#include<stdbool.h>
#include<string.h>
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    void change(pokemon*p){
        (*p).hp=70;
        (*p).attack=80;
        (*p).speed=110;
        (*p).tier='S';
        strcpy((*p).hp,"name");

    }
    int main(){
        pokemon pikachu;
        pikachu.hp=60;
        pikachu.attack=80;
        pikachu.speed=50;
        pikachu.tier='A';
        strcpy(pikachu.name,"pikachu");
        pokemon*x=&pikachu;
        printf("%p\n",&pikachu.hp);
        printf("%p\n",&pikachu.attack);
        printf("%p\n",&pikachu.speed);
        printf("%p\n",&pikachu.tier);
        printf("%c\n",pikachu.name);
        printf("%p",x);
        return 0;
    }