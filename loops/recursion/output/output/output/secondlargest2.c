#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,4,7,34,89,56,34};
    int max= INT_MIN;
    int secondmax=INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            secondmax = max;
            max = arr[i];
        }
        else if (secondmax<arr[i] && max!=arr[i]){
            secondmax = arr[i];
        }
    }
    printf("%d",secondmax);
    return 0;
}


