#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
// A B C D E F    J K L M N O
// A B C D E      K L M N O
// A B C D        L M N O 
// A B C          M N O
// A B            N O
// A              O
     int nst=n;
    int nsp=1;
        for(int i=1;i<=2*n+1;i++){  //pehli wali line
            int a=1;
            int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
            
        }
         printf("\n");
        for(int i=1;i<=n;i++){
            int a=1;
            for(int j=1;j<=nst;j++){  
                 int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
            }
            for(int k=1;k<=nsp;k++){   //spaces
                printf(" ");
                a++;
            }
            for(int j=1;j<=nst;j++){   //stars
                 int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
            }
            nst--;
            nsp+=2;
             printf("\n");
        }
    return 0;
    }
            