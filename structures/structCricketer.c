#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int NoofMatches;
        float average;

    } cricketer;
    // 3 cricketer
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].NoofMatches);
        scanf("%f",&arr[i].average);
    }
    for(int i = 0;i<3;i++){
        printf("Name: %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age: %d\n",arr[i].age);
        printf("No of matches played: %d\n",arr[i].NoofMatches);
        printf("Average: %f\n\n",arr[i].average);
    }
    return 0;
}