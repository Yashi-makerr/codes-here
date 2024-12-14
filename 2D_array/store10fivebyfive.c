#include<stdio.h>
int main(){
    int arr[5][5];
    printf("Enter 25 integers for a 5x5 matrix:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\nThe 5x5 matrix is:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}