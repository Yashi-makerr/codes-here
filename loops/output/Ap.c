#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n*2-1;i=i+2){//AP IS 1,3,5,7,9 SO Nth term is 1+(n-1)2=2n-1
        printf("%d ",i);
    }
    return 0;
}