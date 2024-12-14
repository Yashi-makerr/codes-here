#include<stdio.h>
int main(){
    int r,c;
    printf("enter no. of rows : ");
    scanf("%d",&r);
    printf("enter no. of columns : ");
    scanf("%d",&c);
    int arr[r][c] ;
    printf("enter all the elements: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        //1 2 3
        //4 5 6

        //1 4
        //2 5
        //3 6
        printf("\n");
     }
     for(int i=0;i<c;i++){   // c=3  r=2
        for(int j=0;j<r;j++){  // r=2
            printf("%d", arr[j][i]);
        }
        printf("\n");
     }
    return 0;
}