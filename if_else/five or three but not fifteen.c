#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0 ){
        if(n%15!=0){
            printf("it is divisible by 3 or 5 but not 15");
        }
        else{
            printf("it is divisible by 15");
        }
    }
    else{
        printf("it is not divisible by 3 or 5 ");
    }
    return 0;
}