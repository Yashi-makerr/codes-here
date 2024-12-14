#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;  //base case
    int RecAns= n*factorial(n-1);
    return RecAns;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int fact =factorial(n);
    printf("%d",fact);
    return 0;
}