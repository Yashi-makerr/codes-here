#include<stdio.h>
int main(){
    int a[4] = {1,2,3,4};
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    char arr[4] = {'a','t','h','d'};
    return 0;
}