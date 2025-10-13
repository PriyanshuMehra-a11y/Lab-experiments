#include <stdio.h>

int main() {

    int m, n, p, q;
    // Read dimensions of matrix A
    printf("Enter dimensions of matrix A (m n): ");
scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of matrix A in row major order:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of matrix B
    printf("Enter dimensions of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check matrix multiplication compatibility
if (n != p) 

{
        printf("Matrix multiplication not possible. Number of columns in A (%d) must equal number of rows in B (%d).\n", n, p);
        return 1;
    }

    int B[p][q];
    printf("Enter elements of matrix B in row major order:\n");

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Result matrix dimensions m x q
    int C[m][q];

    // Initialize result matrix C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
}

    // Compute matrix product C = A * B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
}

    // Print matrix A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
}

    // Print matrix B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
}

    // Print result matrix C
    printf("\nProduct matrix C = A * B (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}