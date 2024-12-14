#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("enter values : ");
    scanf("%d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    double m1= (y2-y1)/(x2-x1);
    double m2= (y3-y2)/(x2-x1);
    if(m1=m2){
        printf("all points lie in straight line");
    }
    else{
        printf("not lie in straight line");
    }
    return 0;
}