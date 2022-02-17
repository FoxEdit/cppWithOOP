//
// Created by FoxEdit on 16.02.2022.
//

#include "fTask.hpp"

int *fTask::initArray(const size_t arrLen) {
    int *arr = new int[arrLen];

    for (size_t i = 0; i < arrLen; ++i)
        arr[i] = i;

    return arr;
}

void fTask::printArray(int* arr, const size_t arrLen) {
    for (size_t i = 0; i < arrLen; ++i)
        std::cout << arr[i] << " ";
}

void fTask::disposeArray(const int* arr) {
    delete[] arr;
}