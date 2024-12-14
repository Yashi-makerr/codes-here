#include<stdio.h>
void reverse(int arr[],int sa,int ea){
    for(int i=sa,j=ea;i<j;i++,j--){  //sa--->starting array,ea--->ending array 
        // arr[i] and arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return ;
}
int main(){
    int arr[7]= {1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    // step
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}