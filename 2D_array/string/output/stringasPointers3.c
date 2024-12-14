#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "college wallah";
    char*ptr = str;
    ptr = "physics wallah";
    printf("%s",ptr);
    return 0;
}