#include "test.h"

TEST(SinglePassMergeSortTest, EmptyVector) {
  vector<int> input = {};
  vector<int> expected = {};
  onePassMergeSort(input);
  ASSERT_EQ(input, expected);
}

TEST(SinglePassMergeSortTest, AlreadySorted) {
  vector<int> input = {1, 2, 3, 4, 5};
  vector<int> expected = {1, 2, 3, 4, 5};
  onePassMergeSort(input);
  ASSERT_EQ(input, expected);
}

TEST(SinglePassMergeSortTest, ReverseSorted) {
  vector<int> input = {5, 4, 3, 2, 1};
  vector<int> expected = {1, 2, 3, 4, 5}; 
  onePassMergeSort(input);
  ASSERT_EQ(input, expected); 

}

TEST(SinglePassMergeSortTest, PartiallySorted) {
  vector<int> input = {1, 3, 5, 2, 4};
  vector<int> expected = {1, 2, 3, 4, 5}; 
  onePassMergeSort(input);
  ASSERT_EQ(input, expected); 
}

TEST(SinglePassMergeSortTest, WithDuplicates) {
  vector<int> input = {1, 3, 2, 2, 4, 1, 5};
  vector<int> expected = {1, 1, 2, 2, 3, 4, 5}; 
  onePassMergeSort(input);
  ASSERT_EQ(input, expected); 
}

TEST(SinglePassMergeSortTest, AlmostSorted) {
  vector<int> input = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15, 0}; 
  vector<int> expected = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  onePassMergeSort(input);
  ASSERT_EQ(input,expected);
}
