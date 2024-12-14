#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
    }pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp= 90;
    a.speed=68;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");
    b=a;
    b.speed = 200;
    strcpy(b.name,"Venusaur");
    c=a;
    strcpy(c.name,"pikachu");
    printf("%d\n",a.attack);
    printf("%d\n",b.speed);
    printf("%s\n",c.name);
    return 0;
}