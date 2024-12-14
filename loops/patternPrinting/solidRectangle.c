#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    int m;
    printf("enter number of columns: ");
    scanf("%d",&m);
    //*******.....upto n no. of stars
    for(int i=1;i<=n;i++){  //outer loop-->no. of lines
        for(int i=1;i<=m;i++){ //inner loop -->no of stars in each line
            printf("*");
        }
        printf("\n"); // har line ke baad ek enter marne ke liye
    }
    return 0;
}