#include <stdio.h>
#include <string.h>

int main() {
    char str[10] = "Yashi";  
    printf("%s",str);
    // 2nd index pe 'k'
    for(int i=6;i>=2;i--){
        str[i+1] = str[i];
    }
    printf("\n");
    str[2] = 'k';
    printf("%s",str);
    return 0;
}
