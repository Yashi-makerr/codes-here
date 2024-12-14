#include<stdio.h>
int maze2(int n,int m){
int rightway = 0;
int downway = 0;
if(n==1 && m==1) return 1;
if(n==1){  //cannot go down
    rightway += maze2(n,m-1);
}
if(m==1){  //cannot go right;
    downway += maze2(n-1,m);
}
if(n>1 && m>1){
    rightway += maze2(n,m-1);
    downway += maze2(n-1,m);
}
int totalways = rightway + downway;
return totalways;
}
int main(){
    int n; //no of rows
    printf("enter no. of rows : ");
    scanf("%d",&n);
    int m;
    printf("enter no. of columns : ");
    scanf("%d",&m);
    int NoOfWays = maze2(n,m);
    printf("%d",NoOfWays);
    return 0;
}