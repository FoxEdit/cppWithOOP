//
// Created by georg_000 on 2/18/2022.
//

#ifndef GBCLASSTWO_TASK_HPP
#define GBCLASSTWO_TASK_HPP

class Task {
public:
    virtual ~Task();
    virtual int run() = 0;
};

#endif  // GBCLASSTWO_TASK_HPP
