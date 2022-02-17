//
// Created by FoxEdit on 16.02.2022.
//

#ifndef GBCLASSTWO_FTASK_HPP
#define GBCLASSTWO_FTASK_HPP

#include "includes.hpp"

class fTask {
public:
    int* initArray(size_t arrLen);
    void printArray(int* arr, size_t arrLen);
    void disposeArray(const int* arr);
};

#endif  // GBCLASSTWO_FTASK_HPP
