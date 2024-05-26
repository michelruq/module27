#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <array>
#include <shared_mutex>

class Logger
{
    private: 
       const char* mFilename;
       std::fstream file;
       std::shared_mutex shared_mutex;

    public:
       Logger(const char* filename);
       ~Logger();

       void setMessage(const std::string& text);
       void getMessage(std::string& text);

};