#ifndef TWOP_MERGE_SORT_H
#define TWOP_MERGE_SORT_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

void merge(const vector<int>& left, const vector<int>& right, vector<int>& result);
void onePassMergeSort(vector<int>& arr);

#endif
