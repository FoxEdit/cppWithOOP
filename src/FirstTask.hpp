//
// Created by FoxEdit on 16.02.2022.
//

#ifndef GBCLASSTWO_FIRSTTASK_HPP
#define GBCLASSTWO_FIRSTTASK_HPP

#include <cstdint>

#include "Task.hpp"

class FirstTask : public Task {
protected:
    int* initArray(std::size_t arrLen);
    void printArray(const int* arr, std::size_t arrLen);
    void disposeArray(const int* arr);

public:
    int run() override;
    ~FirstTask() override;
};

#endif  // GBCLASSTWO_FIRSTTASK_HPP
