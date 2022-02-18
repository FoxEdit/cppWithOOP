//
// Created by FoxEdit on 16.02.2022.
//

#ifndef GBCLASSTWO_STASK_HPP
#define GBCLASSTWO_STASK_HPP

#include "fTask.hpp"

class sTask : public fTask {
public:
    int* initArray(size_t d1, size_t d2);
    void printArray(size_t d1, size_t d2, const int* arr);
};

#endif  // GBCLASSTWO_STASK_HPP
