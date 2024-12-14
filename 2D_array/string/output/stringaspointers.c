#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "College Wallah";
    char*ptr = str;
    printf("%p\n",&str[0]);
    printf("%p",str);
    return 0;
}