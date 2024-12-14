#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if((n%3==0 || n%5==0 ) && n%15!=0 ){//(&&>>>>||)
            printf("it is divisible by 3 or 5 but not 15");
    }
    else{
        printf("the number is not matching the required condition ");
    }
    return 0;
}