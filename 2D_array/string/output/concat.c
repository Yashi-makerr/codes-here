#include <stdio.h>
#include <string.h>

int main() {
    char s1[12] = "Raghav";
    char s2[] = "Garg";
    strcat(s1,s2);
    printf("%s", s1);     
    return 0;
}
