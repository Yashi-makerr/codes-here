#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int r= 0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
        //   r=r/10;
    }
    int sum=0;
    sum=sum+r;
    printf("the sum of number+reverse digits %d",sum);
    return 0;
}