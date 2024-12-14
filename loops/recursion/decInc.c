#include <stdio.h>

void countdown(int n) {
    if (n < 1) return;  // Base case
    printf("%d\n", n);
    countdown(n - 1);   // Recursive call
}

void countup(int n) {
    if (n > 4) return;   // Base case
    printf("%d\n", n);
    countup(n + 1);      // Recursive call
}

int main() {
    // First part: 4, 3, 2, 1
    countdown(4);
    
    // Second part: 1, 2, 3, 4
    countup(1);
    
    // Repeat the sequence
    countdown(4);
    countup(1);

    return 0;
}
