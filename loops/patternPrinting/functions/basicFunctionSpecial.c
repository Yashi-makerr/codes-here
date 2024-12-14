#include<stdio.h>
int main(){
    void india();
    india();  //calling india//
    return 0;
}
void india(){
    printf("you are in india\n"); //2
    void australia();
    australia(); //calling australia //3
    return ; //9
}
void australia(){
    printf("you are in australia\n"); //4
    void england();
    england();// calling england //5
    return; //8
}
void england(){
    printf("you are in england\n"); //6
    return; //7
}