#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //1 2 4 8 16 32...
    int a=1;
    for(int i=1;i<=n;i=i+1){
        printf("%d ",a);
        a =a*2;
    }
    return 0;
}