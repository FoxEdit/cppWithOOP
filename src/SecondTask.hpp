//
// Created by FoxEdit on 16.02.2022.
//

#ifndef GBCLASSTWO_SECONDTASK_HPP
#define GBCLASSTWO_SECONDTASK_HPP

#include <cstdint>
#include <random>

#include "FirstTask.hpp"

class SecondTask : public FirstTask {
protected:
    std::mt19937 random_engine;

    int* initArray(std::size_t d1, std::size_t d2);
    void printArray(std::size_t d1, std::size_t d2, const int* arr);

public:
    SecondTask();
    int run() override;
    ~SecondTask() override;
};

#endif  // GBCLASSTWO_SECONDTASK_HPP
