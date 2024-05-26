#include <cstring>
#include "logger.h"

Logger::Logger(const char* filename) : mFilename(filename)
{
    file = std::fstream(filename, std::ios::in | std::ios::out);
    if(file.is_open())
    {
       std::cout << "file is open succesfully" << std::endl;
    }
    else
    {
       std::cout << "could not open file" << std::endl; 
    }
}

void Logger::setMessage(const std::string& text)
{
    shared_mutex.lock(); 
    file << text << '/' << std::endl;
    shared_mutex.unlock();
}

void Logger::getMessage(std::string& text)
{
    std::string temp; 
    shared_mutex.lock(); 
    file.clear();
    file.seekg(0);
    std::getline(file, temp, '/');
    shared_mutex.unlock();
    text = temp;
}

Logger::~Logger()
{
    file.close();
}