#include <iostream>
#include <fstream>
#include <string>

void    serch_replace(std::ifstream& read, std::ofstream& write, std::string& str1, std::string& str2)
{
    std::string line;
    int pos;
    size_t index = 0;
    while (getline(read, line))
    {
        if(!read.eof())
            line += "\n";
        pos = 0;
        index = line.find(str1, pos);
        while (index != std::string::npos)
        {
            line.erase(index, str1.length());
            line.insert(index, str2);
            pos = index + str2.length();
            index = line.find(str1, pos);
        }
        
        write << line;
    }
    return ;
}

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>\n";
        return 1;
    }

    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream read_file;
    std::ofstream outFile;

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty\n";
        return 1;
    }
    read_file.open(av[1]);
    if (!read_file) {
        std::cerr << "Error: Unable to open file av[1]" << std::endl;
        return 1;
    }

    outFile.open(std::string(av[1]).append(".replace").c_str());
    if (!outFile){
        std::cerr << "Error: Cannot open or creat the output file" << std::endl;
        read_file.close();
        return 1;
    }

    serch_replace(read_file, outFile, s1, s2);
    read_file.close();
    outFile.close();
}