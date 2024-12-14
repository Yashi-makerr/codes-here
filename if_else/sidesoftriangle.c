#include <stdio.h>
int main()
{
    int a;
    printf("enter 1st side : ");
    scanf("%d", &a);
    int b;
    printf("enter 2nd side : ");
    scanf("%d", &b);
    int c;
    printf("enter 3rd side : ");
    scanf("%d", &c);
    if(a+b>c && a+c>b && b+c>a){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
    return 0;
}        