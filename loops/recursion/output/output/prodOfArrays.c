#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int prod = 1;
    for(int i=0;i<=4;i++){
        prod = prod * arr[i];
    }
    printf("%d\n",prod);
    return 0;
}