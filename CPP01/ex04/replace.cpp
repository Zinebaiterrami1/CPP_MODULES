#include "replace.hpp"

void replace(std::string filename, std::string s1, std::string s2)
{
    std::string line;
    unsigned long pos;

    pos = 0;
    std::ifstream inputFile(filename.c_str());
    std::string outfile =  filename + ".replace" ;
    std::ofstream outputFile(outfile.c_str());

    if(!inputFile)
    {
        std::cout << "Error opening input file!" << std::endl;
        return ;
    }

    if(!outputFile)
    {
        std::cout << "Error opening ouput file!" << std::endl;
        return ;
    }

    if(s1.empty())
    {
        std::cout << "Error S1 cannot be empty!" << std::endl;
    }
    while(std::getline(inputFile, line))
    {
        pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line;
        if (!inputFile.eof())
            outputFile << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return ;
}
