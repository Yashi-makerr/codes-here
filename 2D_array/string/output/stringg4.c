#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]",str);
    printf("Your input was: %s",str);
    return 0;
}