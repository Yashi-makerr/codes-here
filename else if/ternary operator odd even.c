#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    //ternary operator
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("even number") : printf("odd number");
    // if(n%2==0){
    //     printf("even number");
    // }
    // if(n%2!=0){
    //     printf("odd number");
    // }
    return 0;
}