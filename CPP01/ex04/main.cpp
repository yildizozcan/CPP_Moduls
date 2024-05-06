#include "replace.hpp"

int main(int argc, char *argv[])
{
    if(argc == 4)
    {
        std::ifstream file(argv[1]);
        if (!file)
        {
            std::cerr << "File does not exist." << std::endl;
            return 1;
        }
        std::ofstream newFile("newfile.txt");
        if(!newFile)
        {
            std::cerr << "File not created." << std::endl;
            return 1;
        }
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::string satir;
        while (std::getline(file, satir))
        {
            size_t pos = 0;

            while ((pos = satir.find(s1, pos)) != std::string::npos)
            {
                satir = satir.substr(0, pos) + s2 + satir.substr(pos + s1.length());
                pos += s2.length();
            }
            newFile << satir << std::endl;
        }
        file.close();
        newFile.close();
    }
    else
    {
        std::cout << "Number of incorrect arguments!" << std::endl;
        std::cout << YELLOW_TEXT <<"Usage: <file_name> <old_string> <new_string>" << RESET_TEXT << std::endl;
        return 1;
    }
    return 0;
}