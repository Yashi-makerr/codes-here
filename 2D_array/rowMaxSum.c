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
     int maxSum = -1;  // Initialize to a small value
    for(int i = 0; i < r; i++) {
        int rowSum = 0;
        for(int j = 0; j < c; j++) {
            rowSum += arr[i][j];  // Sum each row
        }
        
        // Update maxSum if the current row sum is larger
        if(rowSum > maxSum) {
            maxSum = rowSum;
        }
    }
    
    // Print the maximum row sum
    printf("Max row sum: %d\n", maxSum);
    return 0;
}
