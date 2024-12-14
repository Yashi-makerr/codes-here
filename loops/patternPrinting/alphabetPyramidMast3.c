#include <stdio.h>
// ABCDEFG
// ABC EFG
// AB   FG
// A     G

int main() {
    int n;// Number of rows after the initial full row
    printf("enter no. of rows: ");
    scanf("%d",&n);
    int nst = n;    // Number of characters on each side of the space
    int nsp = 1;    // Number of spaces in the middle

    // First row - full sequence
    for(int i = 0; i <= 2 * n; i++) {
        printf("%c", 'A' + i);
    }
    printf("\n");

    // Subsequent rows
    for(int i = 1; i <= n; i++) {
        // Left side letters
        for(int j = 0; j < nst; j++) {
            printf("%c", 'A' + j);
        }

        // Middle spaces
        for(int k = 0; k < nsp; k++) {
            printf(" ");
        }

        // Right side letters
        for(int j = 0; j < nst; j++) {
            printf("%c", 'A' + n + 1 + j);
        }

        // Update space and star counts
        nst--;     // Decrease the number of letters printed on both sides
        nsp += 2;  // Increase the spaces in the middle

        printf("\n");
    }

    return 0;
}