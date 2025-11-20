#include <stdio.h>

void print_in_base(int value, int base) {
    if (value == 0)
        return;
    print_in_base(value / base, base);
    int digit = value % base;
    if (digit < 10)
        printf("%d", digit);
    else
        printf("%c", digit - 10 + 'A');
}

int main() {
    int value = 1234;
    int base = 16;

    printf("The value %d in base %d is: ", value, base);
    if (value == 0) 
        printf("0");
    else
        print_in_base(value, base);
    printf("\n");

    return 0;
}
