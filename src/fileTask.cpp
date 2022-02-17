//
// Created by FoxEdit on 16.02.2022.
//

#include "fileTask.hpp"

void fileTask::createFile(const std::string& name, const std::string& path) {
    std::ofstream stream(path + name);

    if (stream.is_open())
        for (int i = 0; i < 60; ++i) stream << i;

    stream.close();
}
void fileTask::mergeFiles(const std::string& fName1, const std::string& fName2,
                          const std::string& fName3, const std::string& path) {
    std::ifstream firstFile(path + fName1);
    std::ifstream secondFile(path + fName2);
    std::ofstream thirdFile(path + fName3);

    if (firstFile.is_open() && secondFile.is_open()) {
        std::string fBuf;
        std::string sBuf;
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

bool fileTask::findWord(const std::string& word, const std::string& fName,
                        const std::string& path) {
    std::ifstream file(path + fName);
    if (file.is_open()) {
        std::string buf;
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