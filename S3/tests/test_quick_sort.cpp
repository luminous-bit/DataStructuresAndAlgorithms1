#include "test.h"

TEST(QuickSortTest, EmptyArray) {
    vector<int> arr = {};
    quick_sort(arr, 0, arr.size() - 1);
    EXPECT_TRUE(arr.empty());
}

TEST(QuickSortTest, SingleElementArray) {
    vector<int> arr = {5};
    quick_sort(arr, 0, arr.size() - 1);
    EXPECT_EQ(arr.size(), 1);
    EXPECT_EQ(arr[0], 5);
}

TEST(QuickSortTest, SortedArray) {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> sorted = {1, 2, 3, 4, 5};
    quick_sort(arr, 0, arr.size() - 1);
    EXPECT_EQ(arr, sorted);
}

TEST(QuickSortTest, ReverseSortedArray) {
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sorted = {1, 2, 3, 4, 5};
    quick_sort(arr, 0, arr.size() - 1);
    EXPECT_EQ(arr, sorted);
}
