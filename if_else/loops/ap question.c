#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=3*n+1;i=i+3){//4,7,10,13,16.....
        printf("%d ",i);
    }
    return 0;
}