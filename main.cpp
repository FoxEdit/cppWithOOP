#include "src/fTask.hpp"
#include "src/fileTask.hpp"
#include "src/includes.hpp"
#include "src/sTask.hpp"

int main() {
    using std::cout;

    fTask ftask;
    const int arrLen = 4;

    int* fArr = ftask.initArray(arrLen);
    ftask.printArray(fArr, arrLen);
    ftask.disposeArray(fArr);

    cout << "\n\n";
    // -----
    sTask stask;

    int* sArr = stask.initArray(arrLen, arrLen);
    stask.printArray(arrLen, arrLen, sArr);
    stask.disposeArray(sArr);

    cout << "\n\n";
    // -----
    fileTask fileTask;

    fileTask.createFile("testFile1.txt", R"(C:\Users\FoxEdit\Desktop\)");
    fileTask.mergeFiles("one.txt", "two.txt", "three.txt",
                        R"(C:\Users\FoxEdit\Desktop\1\)");
    std::cout << fileTask.findWord("test", "testFile2.txt",
                                   R"(C:\Users\FoxEdit\Desktop\1\)");

    return 0;
}