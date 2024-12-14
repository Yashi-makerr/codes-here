#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //4 7 10 13 16 19....upto n number of terms
    //we are going to use extra variables
    int a=4;
    for(int i=4;i<=3*n+1;i=i+3){
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}