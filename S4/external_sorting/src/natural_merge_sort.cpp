#include "../include/natural_merge_sort.h"

bool natural_order(const string &a, const string &b) {
    const char* posA = a.c_str();
    const char* posB = b.c_str();

    while (*posA && *posB) {
        // Пропуск нечисловых символов
        while (*posA && !isdigit(*posA)) {
            if (*posA != *posB) return *posA < *posB;
            posA++;
            posB++;
        }
        // Проверка, что обе строки содержат числа в этом месте
        if (!*posA || !*posB) break;

        // Чтение чисел
        char *endA;
        char *endB;
        long valA = strtol(posA, &endA, 10);
        long valB = strtol(posB, &endB, 10);

        // Сравнение чисел
        if (valA != valB) return valA < valB;

        posA = endA;
        posB = endB;
    }

    // Если одно из чисел закончилось раньше, чем другое, или строки закончились
    return a.length() < b.length();
}

void natural_sort(vector<string> &files) {
    sort(files.begin(), files.end(), natural_order);
}
