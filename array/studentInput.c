#include <stdio.h>

int main()
{
    int student[4][3] ;
    for(int i=0;i<4;i++){
        printf("Enter the marks of %d the student : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&student[i][j]);
        }
    }
        for(int i=0;i<4;i++){
        printf("The marks of the %d student are: ",i+1);
        for(int j=0;j<3;j++){
            printf("%d ",student[i][j]);
    }
    printf("\n");
        }
    return 0;
}