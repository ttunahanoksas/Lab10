#include <stdio.h>

int arithmetic_seq(int n, int start, int diff) {
    if (n == 1) {
        return start;
    } else {
        return arithmetic_seq(n - 1, start, diff) + diff;
    }
}

int geometric_seq(int n, int start, int q) {
    if (n == 1) {
        return start;
    } else {
        return geometric_seq(n - 1, start, q) * q;
    }
}

int main() {
 
    printf("Arithmetic Progression:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", arithmetic_seq(i, 1, 5));  // Start = 1, diff = 5
    }
    printf("\n");
    printf("Geometric Progression:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", geometric_seq(i, 2, 2));  // Start = 2, q = 2
    }
    printf("\n");

    return 0;
}
