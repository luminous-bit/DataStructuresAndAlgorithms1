#ifndef SHELL_SORT_H
#define SHELL_SORT_H

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high);
void quick_sort(vector<int>& array, int low, int high);

#endif
