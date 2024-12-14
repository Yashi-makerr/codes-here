//generate a matrix filled with elements from 1 to n^2 in spiral form
#include <stdio.h>

void generateSpiral(int n) {
    int matrix[n][n];
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int value = 1;
    
    while (left <= right && top <= bottom) {
        // Fill top row
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        // Fill right column
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        // Fill bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }

        // Fill left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = value++;
            }
            left++;
        }
    }

    // Print the matrix
    printf("Spiral Matrix of size %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    
    generateSpiral(n);
    
    return 0;
}
