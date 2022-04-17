#include <Windows.h>
#include <iostream>

// User files
#include "MD5.h"

int main()
{
    // Challenge 1:
    const char* iterationText = "texthere";
    for (int i = 0; i < 50; ++i) {
        auto hashedIterationText = md5(iterationText); 
        Sleep(1);
        std::cout << hashedIterationText << std::endl;
        // Remove last 16 letters
        hashedIterationText.erase(hashedIterationText.size() - 16, hashedIterationText.size());
        iterationText = hashedIterationText.c_str();
    }
    while (!GetAsyncKeyState(VK_SPACE))
        Sleep(100);
}

