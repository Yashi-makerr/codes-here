#include<stdio.h>
int main(){
    int arr[7]= {16,22,39,14,85,96,77};
    int x= 96;
    int check = 5;  // 0 means the element is not present
    for (int i=0;i<=6;i++){
        if(arr[i] == x){
            check = 10; //1 means element is present
            break;
        }
    }
    if(check==5){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array",x);
    }
    return 0;
}