#include<stdio.h>
int main(){
    struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.tier = 'A';
    pikachu.speed = 80;

    struct pokemon mewtwo;
    mewtwo.attack = 90;
    mewtwo.hp = 40;
    mewtwo.tier = 'S';
    mewtwo.speed = 90;
    printf("%c",mewtwo.tier);
    return 0;
}