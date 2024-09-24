#include "test.h"

using namespace std;

// Test case for already sorted array
TEST(InsertionSortTest, AlreadySortedArray) {
    vector<int> arr = {1, 2, 3, 4, 5};
    insertionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}

// Test case for reverse order array
TEST(InsertionSortTest, ReverseOrderArray) {
    vector<int> arr = {5, 4, 3, 2, 1};
    insertionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}

// Test case for random order array
TEST(InsertionSortTest, RandomOrderArray) {
    vector<int> arr = {3, 1, 4, 2, 5};
    insertionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}

// Test case for array with all identical elements
TEST(InsertionSortTest, IdenticalElements) {
    vector<int> arr = {7, 7, 7, 7, 7};
    insertionSort(arr, 5);
    vector<int> fin = {7, 7, 7, 7, 7};
    EXPECT_EQ(arr, fin);
}

// Test case for array with negative numbers
TEST(InsertionSortTest, NegativeNumbers) {
    vector<int> arr = {-1, -3, -2, -5, -4};
    insertionSort(arr, 5);
    vector<int> fin = {-5, -4, -3, -2, -1};
    EXPECT_EQ(arr, fin);
}

// Test case for already partially sorted array
TEST(InsertionSortTest, PartiallySortedArray) {
    vector<int> arr = {1, 2, 5, 3, 4};
    insertionSort(arr, 5);
    vector<int> fin = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, fin);
}
