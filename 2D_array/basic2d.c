#include<stdio.h>
int main(){
    // 1 2
    // 3 4
    //method 1
    int arr[3][3] = {{1,2,7},{3,4,9},{3,9,2}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    //method 2
    // int arr[2][2];
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    return 0;
}