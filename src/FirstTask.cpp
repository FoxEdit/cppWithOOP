//
// Created by FoxEdit on 16.02.2022.
//

#include "FirstTask.hpp"

#include <cmath>
#include <iostream>

int* FirstTask::initArray(const std::size_t arrLen) {
    using std::pow, std::size_t;

    int* arr = new int[arrLen];

    arr[0] = 1;
    for (size_t i = 0; i < arrLen; ++i) arr[i] = static_cast<int>(pow(2, i));

    return arr;
}

void FirstTask::printArray(const int* arr, const std::size_t arrLen) {
    using std::cout, std::size_t;
    for (size_t i = 0; i < arrLen; ++i) cout << arr[i] << ' ';
}

void FirstTask::disposeArray(const int* arr) { delete[] arr; }

FirstTask::~FirstTask() = default;

int FirstTask::run() {
    using std::cout, std::cin;

    int arrLen = 0;
    cout << "Введите размер массива со степенями двойки\n";
    std::cin >> arrLen;

    int* fArr = initArray(arrLen);
    printArray(fArr, arrLen);
    disposeArray(fArr);

    return 0;
}
