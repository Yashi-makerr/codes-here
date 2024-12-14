#include<stdio.h>
int main(){
    for(int i=2;i<=100;i=i+1)
    {
        if(i%2!=0)//odd
        {//i is not a factor of n
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}