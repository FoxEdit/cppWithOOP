//
// Created by FoxEdit on 16.02.2022.
//

#ifndef GBCLASSTWO_FILETASK_HPP
#define GBCLASSTWO_FILETASK_HPP

#include "includes.hpp"

class fileTask {
public:
    bool findWord(const std::string& word, const std::string& fName,
                  const std::string& path);

    void mergeFiles(const std::string& path, const std::string& fName1,
                    const std::string& fName2, const std::string& fName3);

    void createFile(const std::string& name, const std::string& path);
};

#endif  // GBCLASSTWO_FILETASK_HPP
