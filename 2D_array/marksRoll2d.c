#include<stdio.h>
int main(){
    int roll_no,marks,students,c;
    printf("enter no. of students : ");
    scanf("%d",&students);
    printf("enter no. of columns : ");
    scanf("%d",&c);
    int arr[4][2];
    for(int i=0;i<students;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("\n");
     for(int i=0;i<students;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
     }
    return 0;
}