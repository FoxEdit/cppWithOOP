//
// Created by FoxEdit on 16.02.2022.
//

#include "SecondTask.hpp"

#include <cstdlib>
#include <iostream>
#include <random>

SecondTask::SecondTask() : random_engine{std::random_device{}()} {}

int* SecondTask::initArray(const size_t d1, const size_t d2) {
    using std::uniform_int_distribution;

    // https://stackoverflow.com/a/40605814
    int* arr = new int[d1 * d2];

    uniform_int_distribution<int> dist{0, 49};

    for (int i = 0; i < d1; ++i) {
        for (int j = 0; j < d2; ++j) {
            arr[i + d2 * j] = dist(random_engine);
        }
    }

    return arr;
}

void SecondTask::printArray(const size_t d1, const size_t d2, const int* arr) {
    using std::cout;

    for (int i = 0; i < d1; ++i) {
        for (int j = 0; j < d2; ++j) {
            cout << arr[i + d2 * j] << ' ';
        }

        cout << '\n';
    }
}
SecondTask::~SecondTask() = default;

int SecondTask::run() {
    using std::cout, std::cin;

    int arrLen = 0;
    cout << "Введите размер массива\n";
    cin >> arrLen;

    const int* sArr = initArray(arrLen, arrLen);
    printArray(arrLen, arrLen, sArr);
    disposeArray(sArr);

    return 0;
}
