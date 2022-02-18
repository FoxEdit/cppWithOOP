//
// Created by FoxEdit on 16.02.2022.
//

#include "fTask.hpp"

int *fTask::initArray(const size_t arrLen) {
    int *arr = new int[arrLen];

    arr[0] = 1;
    for (size_t i = 0; i < arrLen; ++i)
        arr[i] = (int)pow(2, i);

    return arr;
}

void fTask::printArray(const int* arr, const size_t arrLen) {
    for (size_t i = 0; i < arrLen; ++i)
        std::cout << arr[i] << " ";
}

void fTask::disposeArray(const int* arr) {
    delete[] arr;
}
