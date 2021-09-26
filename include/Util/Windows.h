#pragma once

#include <string>

extern std::string GetDriverPath();
extern std::string GetLastErrorAsString();
extern bool CreateBackgroundProcess(std::string path);