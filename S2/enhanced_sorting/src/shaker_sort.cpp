#include "../include/shaker_sort.h"

void shaker_sort(int arr[], int n) {
    bool swapped;
    int start = 0;
    int end = n - 1;

    do {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;

        --end;

        for (int i = end; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        ++start;

    } while (start < end);
}
