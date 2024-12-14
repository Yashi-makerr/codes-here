#include<stdio.h>
int main(){
    char str[] = "CollegeWallah"; 
    str[1] = 'b';
    int i= 0;
    while(str[i]!='\0'){  //while(arr[i]!='\0')
        printf("%c",str[i]);
        i++;
    }
    return 0;
}