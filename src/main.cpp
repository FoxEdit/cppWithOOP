#include <cstdint>
#include <iostream>

#include "FileTask.hpp"
#include "FirstTask.hpp"
#include "SecondTask.hpp"

int main() {
    using std::cout, std::size_t, std::size;

    Task* const tasks[]{new FirstTask, new SecondTask, new FileTask};
    constexpr size_t len = size(tasks);

    int ret = 0;

    for (size_t i = 0; i < len; ++i) {
        ret |= tasks[i]->run();
        cout << "\n\n-----\n\n";

        delete tasks[i];
    }

    return ret;
}