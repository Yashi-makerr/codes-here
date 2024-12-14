#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "College Wallah";
    char*s2 = s1; //s2 is a shallow copy
    //let's change in s1
    s1[0] = 'M';
    printf("%s",s2);
    // as a deep copy
    return 0;
}