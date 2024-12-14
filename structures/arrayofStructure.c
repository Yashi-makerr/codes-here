#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].speed = 40;
    arr[0].hp = 70;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Mewtwo");
    arr[1].attack = 80;
    arr[1].speed = 90;
    arr[1].hp = 30;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"pikachu");
    arr[2].attack = 130;
    arr[2].speed = 200;
    arr[2].hp = 170;
    arr[2].tier = 'A';
    strcpy(arr[2].name,"Charizard");
    for(int i=0;i<3;i++){
        printf("Name: %s\n",arr[i].name);
        printf("attack: %d\n",arr[i].attack);
        printf("speed: %d\n",arr[i].speed);
        printf("hp: %d\n",arr[i].hp);
        printf("tier: %c\n",arr[i].tier);
    }
    return 0;
}