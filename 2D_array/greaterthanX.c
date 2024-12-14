#include<stdio.h>
int main(){
    int arr[7]={23,56,87,52,90,28,12};
    int x=53;
    for(int i=0;i<=6;i++){
        if(arr[i]>x){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}