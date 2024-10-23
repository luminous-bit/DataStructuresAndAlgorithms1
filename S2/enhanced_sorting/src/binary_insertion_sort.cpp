#include "../include/binary_insertion_sort.h"

void binary_insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int low = 0, high = i - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        // Shift elements to the right to make space for the insertion
        for (int j = i - 1; j >= low; j--) {
            arr[j + 1] = arr[j];
        }

        arr[low] = key;
    }
}
