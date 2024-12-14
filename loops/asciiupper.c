#include<stdio.h>
int main(){
    //what is type casting
    for(int i=65;i<=90;i++){
        char ch = (char)i;  //typecasting
        printf("%c-->",ch);
        printf("%d\n ",i);
    }
    return 0;
}