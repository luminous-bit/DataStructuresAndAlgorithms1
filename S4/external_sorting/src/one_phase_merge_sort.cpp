#include "../include/one_phase_merge_sort.h"

void merge(const vector<int>& left, const vector<int>& right, vector<int>& result) {
    size_t i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }

    // Добавляем оставшиеся элементы из left, если есть
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    // Добавляем оставшиеся элементы из right, если есть
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }
}

// Однофазная сортировка простым слиянием
void onePassMergeSort(vector<int>& arr) {
    if (arr.size() <= 1) return; // Если массив уже отсортирован или пуст

    size_t mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    // Сортируем левую и правую части
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // Сливаем отсортированные части
    vector<int> merged;
    merge(left, right, merged);

    // Заменяем оригинальный массив на отсортированный
    arr = merged;
}
