#include <iostream>
#include <array>
#include <string>

#include "logger.h"

int main (int argc, char* argv[])
{  
    Logger oLogger(argv[1]);

    std::string stringUnderHandling = "Hello";

    oLogger.setMessage(stringUnderHandling);
    oLogger.getMessage(stringUnderHandling);

    std::cout << stringUnderHandling << std::endl;

    return 0;
}