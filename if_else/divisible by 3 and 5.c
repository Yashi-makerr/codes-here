#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){//(n%15==0)
        printf("it is divisible by 3 and 5");
    }
    else{
        printf("it is not divisible by 3 and 5 ");
    }
    return 0;
}