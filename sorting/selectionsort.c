#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {7,8,4,6,3,2,5};
    int n=7;
    printf("Unsorted array : ");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    //selection sort
    for(int i=0;i<n-1;i++){
        int min= INT_MAX;
        int minidx=-1;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<min){
                min = arr[j];
                minidx=j;
            }
        }
        //swap the min element and 1st element of unsorted array
        //swap minidx and i
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("Sorted array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}