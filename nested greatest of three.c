#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st number : ");
    scanf("%d",&a);
    printf("enter 2nd number : ");
    scanf("%d",&b);
    printf("enter 3rd number : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("%d is greatest",a);
        else //a<c-->b<a<c
            printf("%d is greatest",c);
    }
    else{//b>a-->a ab sabse bada toh nhi h
        if (b>c)
            printf("%d is greatest",b);
        else //c>b-->a<b<c
        printf("%d is greatest",c);
    }
    return 0;
}