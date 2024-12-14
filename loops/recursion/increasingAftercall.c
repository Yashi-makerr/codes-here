#include<stdio.h>
void decreasing(int n){
    if (n==0) return; //for increasing
    printf("%d",n);   //increasing(n-1);
     printf("\n");    //printf("%d",n);
    decreasing(n-1);   // printf("\n");
    return;  
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}