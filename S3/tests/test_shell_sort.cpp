#include "test.h"

TEST(ShellSortTest, EmptyArray) {
  vector<int> arr = {};
  shellSort(arr);
  ASSERT_TRUE(arr.empty());
}

TEST(ShellSortTest, SingleElementArray) {
  vector<int> arr = {5};
  shellSort(arr);
  ASSERT_EQ(arr[0], 5);
}

TEST(ShellSortTest, ArrayWithDuplicates) {
  vector<int> arr = {5, 2, 8, 2, 1, 5, 9, 3};
  vector<int> expected = {1, 2, 2, 3, 5, 5, 8, 9};
  shellSort(arr);
  ASSERT_EQ(arr, expected);
}

TEST(ShellSortTest, ArrayWithNegativeNumbers) {
  vector<int> arr = {-5, 2, -8, 10, 1, -1, 0};
  vector<int> expected = {-8, -5, -1, 0, 1, 2, 10};
  shellSort(arr);
  ASSERT_EQ(arr, expected);
}
