#include<stdio.h>
int main(){
    for(int i=1;i<=100;i=i+1)
    {
        if(i%2==0)//even
        {//i is a factor of n
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}