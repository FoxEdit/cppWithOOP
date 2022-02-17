#include "src/fTask.hpp"
#include "src/fileTask.hpp"
#include "src/includes.hpp"
#include "src/sTask.hpp"

int main() {
    using std::cout, std::cin, std::endl;

    fTask ftask;
    int arrLen = 0;
    cout << "Введите размер массива со степенями двойки" << endl;
    std::cin >> arrLen;

    int* fArr = ftask.initArray(arrLen);
    ftask.printArray(fArr, arrLen);
    ftask.disposeArray(fArr);

    cout << "\n\n-----\n\n";
    // -----
    sTask stask;

    int* sArr = stask.initArray(arrLen, arrLen);
    stask.printArray(arrLen, arrLen, sArr);
    stask.disposeArray(sArr);

    cout << "\n\n-----\n\n";
    // -----
    fileTask fileTask;
    std::string randomFile, file1, file2, file3, word, fileWithWord;

    cout << "Внимание! Все последующие функции будут реализовываться на "
            "диске C:. Аргументы (например, путь + имя) пишутся через пробел."
         << endl;

    cout << "1(3). Введите имя файла, который будет создан со случайным "
            "содержимом"
         << endl;

    cin >> randomFile;
    fileTask.createFile(randomFile, R"(C:\)");


    cout << "2(3). Введите имена 3 файлов, из которых первые 2 это те, которые "
            "нужно склеить. (с расширением .txt)"
         << endl;

    cin >> file1 >> file2 >> file3;
    fileTask.mergeFiles(file1, file2, file3, R"(C:\)");


    cout << "3(3). Введите слово и название файла, в котором нужно проверить "
            "имеется ли это слово. (файл с расширением .txt)"
         << endl;

    cin >> word >> fileWithWord;
    std::cout << fileTask.findWord(word, fileWithWord, R"(C:\)");

    return 0;
}