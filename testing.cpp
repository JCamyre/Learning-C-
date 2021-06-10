#include <iostream>
#include <vector>
#include <string>
#include <filesystem>

// Is this just a formality. cout, cin, endl, string. std::cout. 
using std::cout; using std::cin;
using std::endl; using std::string;
using std::filesystem::directory_iterator;

int main() {
    string path = "/";

    for (const auto & file : directory_iterator(path))
        cout << file.path() << endl;

    return EXIT_SUCCESS;
}