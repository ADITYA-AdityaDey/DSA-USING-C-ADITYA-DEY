#include <stdio.h>

int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        int pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if (arr[pos] == key) {
            return pos;  // Return the index if the key is found
        } else if (arr[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;  // Return -1 if the key is not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 16;

    int result = interpolationSearch(arr, n, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

