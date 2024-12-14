#include<stdio.h>
int main(){
    int arr[5] = {1,3,6,4,8};
    arr[4] = 100;  //{1,3,6,4,100}
    arr[1] = 1;  //{1,1,6,4,100}
    printf("%d",arr[4]);  
    return 0;
}