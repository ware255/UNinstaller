#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

class un{
private:
    std::string filename;
    std::string re;
public:
    un();
    int nullout();
    void renamefile();
    void deletefile();
};