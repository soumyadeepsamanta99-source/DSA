#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int x = 40;

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (x == arr[mid]) {
            printf("Found at position %d", mid);
            found = 1;
            break;
        }

        if (x > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Not found");
    }

    return 0;
}
