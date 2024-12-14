#include<stdio.h>
int main(){
    int arr[9] = {3,6,7,8,9,8,8,6,3};
    int i=0;
    int j=8;
    while(i<=j){
    if(arr[i]!=arr[j]){
        printf("No it is not a palindrome");
        return 0;
    } 
    i++;
    j--;
    }
    printf("Yes it is a palindrome");
    return 0;
}