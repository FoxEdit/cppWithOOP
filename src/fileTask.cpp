//
// Created by FoxEdit on 16.02.2022.
//

#include "FileTask.hpp"

#include <fstream>
#include <iostream>
#include <string>

void FileTask::createFile(const std::string& name, const std::string& path) {
    using std::ofstream;

    ofstream stream(path + name);

    if (stream.is_open())
        for (int i = 0; i < 60; ++i) stream << i;

    stream.close();
}

void FileTask::mergeFiles(const std::string& fName1, const std::string& fName2,
                          const std::string& fName3, const std::string& path) {
    using std::ofstream, std::ifstream, std::string, std::getline;

    ifstream firstFile(path + fName1);
    ifstream secondFile(path + fName2);
    ofstream thirdFile(path + fName3);

    if (firstFile.is_open() && secondFile.is_open()) {
        string fBuf;
        string sBuf;
        while (!firstFile.eof()) {
            getline(firstFile, fBuf);
            thirdFile << fBuf;
        }
        while (!secondFile.eof()) {
            getline(secondFile, sBuf);
            thirdFile << sBuf;
        }
        firstFile.close();
        secondFile.close();
        thirdFile.close();
    }
}

bool FileTask::findWord(const std::string& word, const std::string& fName,
                        const std::string& path) {
    using std::ifstream, std::string, std::getline;

    ifstream file(path + fName);
    if (file.is_open()) {
        string buf;

        while (!file.eof()) {
            getline(file, buf);

            if (buf.find(word) != SIZE_MAX) {  // if the sub-string is not found
                file.close();                  // it returns max size_t value
                return true;
            }
        }

        file.close();
    }

    return false;
}

FileTask::~FileTask() = default;

int FileTask::run() {
    using std::cout, std::cin, std::string;

    string randomFile, file1, file2, file3, word, fileWithWord;

    cout << "Внимание! Все последующие функции будут реализовываться на "
            "диске C:. Аргументы (например, путь + имя) пишутся через пробел."
         << '\n';

    cout << "1(3). Введите имя файла, который будет создан со случайным "
            "содержимом"
         << '\n';

    cin >> randomFile;
    createFile(randomFile, R"(C:\)");

    cout << "2(3). Введите имена 3 файлов, из которых первые 2 это те, которые "
            "нужно склеить. (с расширением .txt)"
         << '\n';

    cin >> file1 >> file2 >> file3;
    mergeFiles(file1, file2, file3, R"(C:\)");

    cout << "3(3). Введите слово и название файла, в котором нужно проверить "
            "имеется ли это слово. (файл с расширением .txt)"
         << '\n';

    cin >> word >> fileWithWord;
    cout << findWord(word, fileWithWord, R"(C:\)");

    return 0;
}