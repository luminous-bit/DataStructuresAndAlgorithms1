#include "../include/optimized_bubble_sort.h"

void optimizedBubbleSort(vector<int>& arr, int n) {
    bool swapped;
    int temp;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break; // No swaps means the array is sorted
    }
}
