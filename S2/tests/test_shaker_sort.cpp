#include "test.h"

TEST(ShakerSortTest, EmptyArray) {
    int arr[] = {};
    shaker_sort(arr, 0);
    ASSERT_TRUE(true); // No assertion needed for empty array case.
}

TEST(ShakerSortTest, SingleElementArray) {
    int arr[] = {5};
    shaker_sort(arr, 1);
    ASSERT_EQ(arr[0], 5);
}

TEST(ShakerSortTest, SortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    shaker_sort(arr, 5);
    for (int i = 0; i < 5; i++) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

TEST(ShakerSortTest, ReverseSortedArray) {
    int arr[] = {5, 4, 3, 2, 1};
    shaker_sort(arr, 5);
    for (int i = 0; i < 5; i++) {
        ASSERT_EQ(arr[i], i + 1);
    }
}
