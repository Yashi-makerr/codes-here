#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
    int day;
    int month;
    int year;
    } date;
    date a,b;
    //a-->19/12/1999
    //b-->13/6/2000
    a.day = 19;
    a.month = 12;
    a.year = 1999;
    b.day = 13;
    b.month = 6;
    b.year = 2000;
    bool flag = true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;
    if(flag==true) printf("the dates are same");
    if(flag==false) printf("the dates are different");
    return 0;
}