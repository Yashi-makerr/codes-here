#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book{
        int noOfpages;
        float prices;
        char name[50];
    } Book;
    Book a;
    Book b;
    Book c;

    a.noOfpages = 200;
    a.prices = 26.9;
    strcpy(a.name,"secret seven");
    b.noOfpages = 56;
    b.prices = 78.9;
    strcpy(b.name," mighty");
    c.noOfpages = 489;
    c.prices = 90.9;
    strcpy(c.name,"cool");
    printf("%d\n",a.noOfpages);
    printf("%f\n",b.prices);
    printf("%s\n",c.name);
    return 0;
}