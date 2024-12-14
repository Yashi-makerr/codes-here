#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //3 12 48 ....
    int a;
    for(int i=3;i<=n;i=i+1){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}