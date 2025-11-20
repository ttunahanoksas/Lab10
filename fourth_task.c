#include <stdio.h>

void print_forwards(int arr[], int size, int index) {
    if (index == size)
        return;
    printf("%d ", arr[index]);
    print_forwards(arr, size, index + 1);
}

void print_backwards(int arr[], int size, int index) {
    if (index < 0)
        return;
    printf("%d ", arr[index]);
    print_backwards(arr, size, index - 1);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1 (5 elements) printed forwards: ");
    print_forwards(arr1, size1, 0);
    printf("\n");

    printf("Array 2 (10 elements) printed forwards: ");
    print_forwards(arr2, size2, 0);
    printf("\n");

    printf("Array 1 (5 elements) printed backwards: ");
    print_backwards(arr1, size1, size1 - 1);
    printf("\n");

    printf("Array 2 (10 elements) printed backwards: ");
    print_backwards(arr2, size2, size2 - 1);
    printf("\n");

    return 0;
}
