#include<stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    // Count the number of 5s in the factors of n!
    for (int i = 5; n / i > 0; i *= 5) {
        count += n / i;
    }
    printf("%d", count);
    return 0;
}
