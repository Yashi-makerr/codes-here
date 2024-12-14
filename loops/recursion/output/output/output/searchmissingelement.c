#include<stdio.h>
int main(){
    int firstMissingPositive(int* nums, int size){
    int a = INT_MAX;
    int *n = (int*)calloc(size, 4);
    for(int i = 0; i < size ; i++)
        if (nums[i] <= size && nums[i] > 0)
            n[nums[i]-1] = nums[i];
    for(int i = 0 ; i < size; i++)
        if (n[i] == 0)
            return i+1;
    return size + 1;
}
}
//finding missing element x
//int sum = 0
//for(int i= 0;i<=98;i++){
// sum = sum + arr[i];
//}
// int sum2= 100*(101)/2
//x= sum2- sum
