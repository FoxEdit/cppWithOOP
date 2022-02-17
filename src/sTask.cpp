//
// Created by FoxEdit on 16.02.2022.
//

#include "sTask.hpp"

int* sTask::initArray(const size_t d1, const size_t d2) {
    // https://stackoverflow.com/a/40605814
    int* arr = new int[d1 * d2];

    for (int i = 0; i < d1; ++i) {
        for (int j = 0; j < d2; ++j) {
            arr[i + d2 * j] = rand() % 50;
        }
    }

    return arr;
}

void sTask::printArray(size_t d1, size_t d2, int* arr) {
    for (int i = 0; i < d1; ++i) {
        for (int j = 0; j < d2; ++j) {
            std::cout << arr[i + d2 * j] << " ";
        }
        std::cout << "\n";
    }
}
