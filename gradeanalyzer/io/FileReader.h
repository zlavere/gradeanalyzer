#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

namespace io {
class FileReader
{
    private:
        string fileName;
        //vector<string> data;
        //vector<string> parseData();

    public:
        FileReader(const string& fileName);
        virtual ~FileReader();
        vector<string> readInFileLines();
};
}


#endif // FILEREADER_H
