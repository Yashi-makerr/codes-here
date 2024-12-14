#include<stdio.h>
void preInPost(int n){
    if(n==0) return ;
    printf("pre %d\n",n);
    preInPost(n-1);
    printf("In %d\n",n);
    preInPost(n-1);
    printf("Post %d\n",n);
    return ;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    preInPost(n);
    return 0;
}