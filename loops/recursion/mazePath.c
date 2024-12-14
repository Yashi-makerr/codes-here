#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
int rightway = 0;
int downway = 0;
if(cr==er && cc==ec) return 1;
if(cr==er){  //only rightway call;
    rightway += maze(cr,cc+1,er,ec);
}
if(cc==ec){  //only downway call;
    downway += maze(cr+1,cc,er,ec);
}
if(cr<er && cc<ec){
    rightway += maze(cr,cc+1,er,ec);
    downway += maze(cr+1,cc,er,ec);
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
    int NoOfWays = maze(1,1,n,m);
    printf("%d",NoOfWays);
    return 0;
}