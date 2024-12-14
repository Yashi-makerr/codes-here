#include<stdio.h>
int main(){
    int m;
    printf("Enter no. of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter no. of column of 1st matrix : ");
    scanf("%d",&n);
    int a[m][n];
    printf("\nEnter the elements of first matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // wave print
    printf("\n");
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j= 0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        }
        else{
            for(int j= n-1;j>=0;j--){
            printf("%d ",a[i][j]); 
        }
        }
        printf("\n");
    }
    return 0;
}