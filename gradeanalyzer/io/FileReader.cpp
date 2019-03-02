#include "FileReader.h"

namespace io
{
FileReader::FileReader(const string& fileName)
{
    this->fileName = fileName;
}

vector<string> FileReader::readInFileLines()
{
    ifstream stream;
    string line;
    vector<string> fileLines;
    stream.open(this->fileName);

    if(!stream)
    {
        cout << "Error" << endl;
    }

    while(stream >> line)
    {
        cout << line << endl;
        fileLines.push_back(line);
    }
    stream.close();
    return fileLines;
}

FileReader::~FileReader()
{
    //dtor
}
}

