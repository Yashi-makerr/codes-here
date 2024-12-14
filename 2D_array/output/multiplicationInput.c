#include<stdio.h>
int main(){
    //1st matrix detail
    int m;
    printf("Enter no. of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter no. of column of 1st matrix : ");
    scanf("%d",&n);
    int a[m][n];
    //input the first matrix
    printf("\nEnter the elements of first matrix : \n");
    for(int i=0;i<m;i++){
        for(int j= 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //2nd matrix
    int p;
    printf("Enter no. of rows of 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("Enter no. of columns of 2nd matrix : ");
    scanf("%d",&q);
    int b[p][q];
    //input the second matrix
    printf("\nEnter the elements of second matrix : \n");
    for(int i=0;i<p;i++){
        for(int j= 0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
        printf("The matrices cannot be multiplied");
    }
    else{
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
        for(int j= 0;j<q;j++){
            res[i][j] = 0;
            //i column of a,j column of b
            for(int k=0;k<n;k++){
                res[i][j] += a[i][k]*b[k][j];

            }
            }
        }
        printf("The resultant matrix is : \n");
        for(int i=0;i<m;i++){
        for(int j= 0;j<q;j++){
            printf("%d ",res[i][j]);
    }
    printf("\n");
        }
    }
    return 0;
}