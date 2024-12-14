#include<stdio.h>
int main(){
    int arr[7]= {1,5,6,1,2,4,3};
    for(int i= 0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
               printf("%d is the duplicate element",arr[i]);
            }
        
        }
    }
    return 0;
}