#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //100 50 25 12.5 6.25....
    float a=100;
    for(int i=1;i<=n;i=i+1){
        printf("%f ",a);
        a =a*1/2;
    }
    return 0;
}