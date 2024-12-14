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
     int max=arr[0][0];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (max<arr[i][j]){
                max=arr[i][j];
            }
        }
     }
printf("the max of the given matrix is: %d",max);
    return 0;
}
