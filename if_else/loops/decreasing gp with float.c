#include<stdio.h>
int main(){
    int n;// itni baar loop chalega
    printf("enter a number: ");
    scanf("%d",&n);
    // 100 50 25.....
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
    a =a*1/2;
    }
    return 0;
}