#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {-1,-4,-7,-34,-89,-56,-34};
    int min= INT_MAX; //sabse chota number
    for(int i=0;i<=6;i++){
        if(min<arr[i]){
           min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}