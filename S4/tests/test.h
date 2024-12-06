#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <gtest/gtest.h>

using namespace std;

#include "../external_sorting/include/natural_merge_sort.h"
#include "../external_sorting/include/one_phase_merge_sort.h"
#include "../external_sorting/include/two_phase_merge_sort.h"

bool isSorted(const vector<int>& arr);

#endif
