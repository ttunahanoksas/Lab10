#include <stdio.h>

void print_groups_of_three(int number) {
    if (number == 0) {
        return;
    }
    print_groups_of_three(number / 1000);
    printf("%03d ", number % 1000);
}

int main() {
    int values[] = {16077216, 999, 1000, 12, 0, 1000222};
    int num_values = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < num_values; i++) {
        printf("Formatted number: ");
        if (values[i] == 0) {
            printf("000 ");
        } else {
            print_groups_of_three(values[i]);
        }
        printf("\n");
    }

    return 0;
}
