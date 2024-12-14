#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};  // First matrix
    int b[2][2] = {{5, 6}, {7, 8}};  // Second matrix

    // Adding the two matrices and storing the result in the first matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            a[i][j] += b[i][j];  // Add and store the result in the first matrix
        }
    }

    // Printing the resulting matrix
    printf("Resulting matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);  // Print the modified first matrix
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
