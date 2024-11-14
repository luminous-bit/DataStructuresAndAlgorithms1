#include "../include/shell_sort.h"

void shellSort(vector<int>& arr) {
    int n = arr.size();
    int gap = n / 2;

    // Start with a big gap, then reduce the gap until it becomes 0
    while (gap > 0) {
        // Perform a gapped insertion sort for this gap size.
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        gap /= 2;
    }
}
