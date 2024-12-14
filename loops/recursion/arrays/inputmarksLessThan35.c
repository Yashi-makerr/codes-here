#include<stdio.h>
int main(){
    int marks[10] ;
    for(int i = 0;i<=9;i++){
    printf("enter a marks %d\n:",i++);
    scanf("%d ",&marks[i]);
    }
    printf("students with marks below 35 are at indices: ");
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
         printf("%d ",i);
        }
    }
    return 0;
}