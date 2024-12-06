#ifndef ONEP_MERGE_SORT_H
#define ONEP_MERGE_SORT_H

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right);
void twoPassMergeSort(vector<int>& arr, int begin, int end);

#endif
