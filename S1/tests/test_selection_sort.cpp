#include "test.h"

using namespace std;

// Test case for already sorted array
TEST(SelectionSortTest, AlreadySortedArray) {
    vector<int> arr = {1, 2, 3, 4, 5};
    selectionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}

// Test case for reverse order array
TEST(SelectionSortTest, ReverseOrderArray) {
    vector<int> arr = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}

// Test case for random order array
TEST(SelectionSortTest, RandomOrderArray) {
    vector<int> arr = {3, 1, 4, 2, 5};
    selectionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}
