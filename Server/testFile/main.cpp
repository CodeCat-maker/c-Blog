#include <filesystem>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
namespace fs = std::__fs::filesystem;
int main()
{
    string path = "../blogList";
    for (const auto &file : fs::recursive_directory_iterator(path))
    {
        if (file.is_directory() == false)
        {
            fs::path p = file.path();
            std::ifstream in(p);
            std::string contents((std::istreambuf_iterator<char>(in)),
                                 std::istreambuf_iterator<char>());
            size_t pose = contents.find("\n");
            string title = contents.substr(0, pose);
            contents.erase(0, pose + 1);
            pose = contents.find("\n");
            string des = contents.substr(0, pose);
            cout << title << endl
                 << des << endl;
            contents.erase(0, pose + 1);
            cout << contents;
        }
    }
    return 0;
}