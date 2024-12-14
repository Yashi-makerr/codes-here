#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("enter 1st number : ");
    scanf("%d", &a);
    printf("enter 2nd number : ");
    scanf("%d", &b);
    printf("enter 3rd number : ");
    scanf("%d" ,&c);
    printf("enter 4th number : ");
    scanf("%d" ,&d);
    if(a>b && a>c && a>d){
        printf("%d is greatest",a);
    }
    if(b>a && b>c && b>d){
        printf("%d is greatest",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is greatest",c);
    if(d>a && d>b && d>c){
        printf("%d is greatest",d);
    }
    return 0;
}        