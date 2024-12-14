#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows/column : \n");
    scanf("%d",&n);
    printf("enter all the elements: \n");
    int arr[n][n] ;  //n*n total elements
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    } 
//transpose
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //swap arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        //1 2 3
        //4 5 6
        //7 8 9

        //1 4 7
        //2 5 8
        //3 6 9
     }
     //output
     for(int i=0;i<n;i++){   // c=3  r=2
        for(int j=0;j<n;j++){  // r=2
            printf("%d", arr[i][j]);
        }
        printf("\n");
     }
    return 0;
}