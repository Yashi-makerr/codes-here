#include<stdio.h>
int main(){
    int marks[10] = {97,45,87,23,18,70,34,37,90,67};
    for(int i = 0;i<=9;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}