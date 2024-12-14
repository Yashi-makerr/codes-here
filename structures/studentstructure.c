#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct student{
    int rollno;
    char name[50];
    char dept[50];
    char course[50];
    int yearofjoining;
} student;
void check(student s1,student s2)
{
    if(s1.dept == s2.dept){
    printf("both are same");
    }
    else{
    printf("both are not same");
    }
}
int main(){
     student s1,s2;
s1.rollno =23;
s1.yearofjoining=2000;
strcpy(s1.name,"aryan");
strcpy(s1.dept,"mechanical");
strcpy(s1.course,"btech");
s2.rollno =83;
s2.yearofjoining=2001;
strcpy(s2.name,"rayan");
strcpy(s2.dept,"cse");
strcpy(s2.course,"btech");
check(s1,s2);
return 0;
}
