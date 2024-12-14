#include<stdio.h>
int main(){
    int year;
    printf("enter your year: ");
    scanf("%d",&year);
    (year%400==0?(year%100==0?printf("it is a leap year\n"):printf("it is not a leap year")):(year%4==0?printf("it is a leap year"):printf("it is not a leap year\n")));
    return 0;
}