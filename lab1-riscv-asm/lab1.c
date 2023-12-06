#include <stdio.h>

#define N 4 // Matrix size

void process(int matrix[N][N], int *sum_main, int *sum_secondary) {
    *sum_main = 0;
    *sum_secondary = 0;
    for (int i = 0; i < N; ++i) {
        *sum_main += matrix[i][i];              // Add main diagonal elements
        *sum_secondary += matrix[i][N-1-i];     // Add secondary diagonal elements
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int sum_main, sum_secondary;

    process(matrix, &sum_main, &sum_secondary);

    printf("Sum of main diagonal: %d\n", sum_main);
    printf("Sum of secondary diagonal: %d\n", sum_secondary);

    return 0;
}
