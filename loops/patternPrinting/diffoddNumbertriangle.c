#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){  //no of rows-->i
        for(int j=1;j<=i;j++){  //no. of columns-->j
            printf("%d ",a);
            a=a+2;
        }
        printf("\n"); 
    }
    return 0;
}