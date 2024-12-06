#include "test.h"

TEST(TwoWayMergeSortTest, EmptyArray) {
    vector<int> arr;
    twoPassMergeSort(arr, 0, arr.size() - 1);
    EXPECT_TRUE(isSorted(arr));
}

TEST(TwoWayMergeSortTest, SingleElement) {
    vector<int> arr = {5};
    twoPassMergeSort(arr, 0, arr.size() - 1);
    EXPECT_TRUE(isSorted(arr));
}

TEST(TwoWayMergeSortTest, TwoElements) {
    vector<int> arr = {2, 1};
    twoPassMergeSort(arr, 0, arr.size() - 1);
    EXPECT_TRUE(isSorted(arr));
    vector<int> expected = {1, 2};
    EXPECT_EQ(arr, expected);
}

TEST(TwoWayMergeSortTest, UnsortedArray) {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    twoPassMergeSort(arr, 0, arr.size() - 1);
    EXPECT_TRUE(isSorted(arr));
    vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};
    EXPECT_EQ(arr, expected);
}
