#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int SumEven = 0;  //1 +3 +5+7=16
    int SumOdd = 0;  //2+4+6+8=20
    for(int i=0;i<=6;i++){
        if(i%2==0){
            SumEven+=arr[i];
        }
        else{
            SumOdd+=arr[i];
        }
    }
    int res = SumEven-SumOdd;
    printf("%d",res);
    return 0;
}