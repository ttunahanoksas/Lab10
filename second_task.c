#include <stdio.h>

int fib_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev2 = 0, prev1 = 1, current;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int n = 40;
    printf("Fibonacci of %d is: %d\n", n, fib_iterative(n));
    
    return 0;
}
