#include<stdio.h>
int main(){
    int n;// itni baar loop chalega
    printf("enter a number: ");
    scanf("%d",&n);
    // 100 97 94 .....
    int a=100;
    for(int i=1;a>0;i++){
        printf("%d ",a);
    a = a-3;
    }
    return 0;
}