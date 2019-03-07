#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <string>
using namespace std;

namespace io
{
class FileWriter
{
private :
    string outputFile;
public:
    FileWriter(const string& outputFile);
    virtual ~FileWriter();
    void writeToOutputFile(const string& outputData);
};
}

#endif // FILEWRITER_H
