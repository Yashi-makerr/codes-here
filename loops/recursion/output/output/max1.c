#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {-1,-4,-7,-34,-89,-56,-34};
    int max= INT_MIN; //sabse chota number
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
