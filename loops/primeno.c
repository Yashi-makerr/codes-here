#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n); 
    int a=0;
    for(int i=2;i<=n-1;i=i+1){
        if(n%i==0){//i is a factor of n
            a=1;
            break;
        }
    }
    if(n==1)printf("1 is niether prime nor composite");
    if(a==0)printf("the given no. is prime\n");
    else printf("the given no. is composite\n");
    return 0;
}