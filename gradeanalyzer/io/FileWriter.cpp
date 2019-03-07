#include "FileWriter.h"

#include <iostream>
#include <string>
#include <fstream>

namespace io
{

FileWriter::FileWriter(const string& outputFile)
{
    this->outputFile = outputFile;
}

void FileWriter::writeToOutputFile(const string& outputData)
{
    ofstream outFileStream;
    outFileStream.open(this->outputFile);
    outFileStream << outputData;
    outFileStream.flush();
    outFileStream.close();
}

FileWriter::~FileWriter()
{
    //dtor
}
}

