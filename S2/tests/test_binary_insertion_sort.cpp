#include "test.h"

TEST(BinaryInsertionSortTest, EmptyArray) {
    int arr[] = {};
    binary_insertion_sort(arr, 0);
    ASSERT_TRUE(true); // No assertion needed for empty array case.
}

TEST(BinaryInsertionSortTest, SingleElementArray) {
    int arr[] = {5};
    binary_insertion_sort(arr, 1);
    ASSERT_EQ(arr[0], 5);
}

TEST(BinaryInsertionSortTest, SortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    binary_insertion_sort(arr, 5);
    for (int i = 0; i < 5; i++) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

TEST(BinaryInsertionSortTest, ReverseSortedArray) {
    int arr[] = {5, 4, 3, 2, 1};
    binary_insertion_sort(arr, 5);
    for (int i = 0; i < 5; i++) {
        ASSERT_EQ(arr[i], i + 1);
    }
}
