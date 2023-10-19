#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <direct.h>

int main() {
    char buffer[1000];
    _getcwd(buffer, sizeof(buffer));

    std::string relativePath = "\\BIN\\thorium.exe"; // Adjust the relative path as needed

    std::string command = "start \"\" \"" + std::string(buffer) + relativePath + "\" --app=\"https://youtube.com\" --window-position=0,0 --window-size=800,600 --user-data-dir=\"" + std::string(buffer) + "\\USER_DATA\" --allow-outdated-plugins --disable-logging --disable-breakpad";
    std::system(command.c_str());
    return 0;
}
