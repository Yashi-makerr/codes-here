#include<stdio.h>
int main(){
    int r,c;
    printf("enter no. of rows : ");
    scanf("%d",&r);
    printf("enter no. of columns : ");
    scanf("%d",&c);
    int arr[r][c] ;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
     int r1, r2,c1,c2;
    printf("Enter the row boundaries (r1 and r2): ");
    scanf("%d %d", &r1, &r2);
    printf("Enter the column boundaries (c1 and c2): ");
    scanf("%d %d", &c1, &c2);
     int sum=0;
     for(int i=r1;i<r2;i++){
        for(int j=c1;j<c2;j++){
            sum+=arr[i][j];
        }
             }
             printf("the sum of the given matrix is: %d",sum);

    return 0;
}
