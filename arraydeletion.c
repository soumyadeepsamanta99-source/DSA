#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    int i;

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}