#include<stdio.h>
int main(){
    int n;
    printf("enter year : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}