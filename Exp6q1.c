#include <stdio.h>

// Recursive factorial
long long FACT_recursive(int num) {
    if (num == 0)
        return 1;
    else
        return num * FACT_recursive(num - 1);
}

// Iterative factorial
long long FACT_iterative(int num) {
    long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

// Binomial coefficient using factorial
long long binomial_coefficient(int n, int r) {
    long long numerator = FACT_iterative(n);       // Or use FACT_recursive(n)
    long long denominator = FACT_iterative(r) * FACT_iterative(n - r);
    return numerator / denominator;
}

int main() {
    int n, r;
    printf("Enter n and r for C(n, r): ");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input. Ensure 0 ≤ r ≤ n.\n");
        return 1;
    }

    long long result = binomial_coefficient(n, r);
    printf("C(%d, %d) = %lld\n", n, r, result);

    return 0;
}