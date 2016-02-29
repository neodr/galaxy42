#include "libs01.hpp"

void print_strBytes(const std::string& str) {
    for(size_t i = 0; i < str.length(); ++i) {
        std::cout << static_cast<int>(str[i]) << ":";
    }
    std::cout << std::endl;
}

bool file_exsist (const std::string& filename) {
    ifstream f(filename.c_str());
    if (f.good()) {
        f.close();
        return true;
    } else {
        f.close();
        return false;
    }
}

// interesting :) should be standard in c++17
//#include <experimental/filesystem>
//namespace fs = std::experimental::filesystem;

//void demo_exists(const fs::path& p, fs::file_status s = fs::file_status{})
//{
//    std::cout << p;
//    if(fs::status_known(s) ? fs::exists(s) : fs::exists(p))
//        std::cout << " exists\n";
//    else
//        std::cout << " does not exist\n";
//}