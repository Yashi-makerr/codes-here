#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]= {96,22,39,14,85,96,77};
    int x= 96;
    int idx = -1;
    bool flag = false; // 0 means the element is not present
    for (int i=0;i<=6;i++){
        if(arr[i] == x){
            flag = true; //1 means element is present
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and it's index is %d",x,idx);
    }
    return 0;
}