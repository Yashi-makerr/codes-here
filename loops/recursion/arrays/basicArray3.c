#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0;i<=4;i++){
        printf("\n enter element no. %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[4]);
    return 0;
    // float a[3] = {1.2,5.6,9.5};
    //printf("%f",a[2]);
    //char arr[4] = {'s','T','%','y'};
    //printf("%c",arr[2]);
}