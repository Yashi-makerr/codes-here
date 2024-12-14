#include<stdio.h>
int main(){
    int arr[5] = {1,2,1,4,5};
    printf("%p\n",&arr[0]);  //bytes =04
    printf("%p\n",&arr[1]);  //bytes = 08
    printf("%p\n",&arr[2]);  //bytes = 0c
    printf("%p\n",&arr[3]);  //bytes = 16
    printf("%p\n",&arr[4]);  //bytes = 20
    return 0;
}