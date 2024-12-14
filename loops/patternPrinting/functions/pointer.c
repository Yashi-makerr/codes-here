#include<stdio.h>
int main(){
    int a= 25;
    int* x = &a;  //intx* -->int ka address store karta hai
    //vvip -->  *x= 7 ;  //a is changed
    int** y= &x;
    printf("%p\n",&x);
    printf("%p\n",y);
    return 0;
}