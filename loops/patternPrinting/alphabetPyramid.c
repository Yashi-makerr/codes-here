#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
                printf(" ");
        }
        int a=1;
        for(int j=1;j<=(2*i-1);j++){
            int d=a+64;
            char ch =(char)d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
