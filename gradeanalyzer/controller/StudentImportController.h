#ifndef STUDENTIMPORTCONTROLLER_H
#define STUDENTIMPORTCONTROLLER_H


#include "model/Roster.h"
using namespace model;
#include "FileReader.h"
using namespace io;

namespace controller
{
class StudentImportController
{
private:
    FileReader reader;
    string inFileName;
    const int firstNameIndex = 0;
    const int lastNameIndex = 1;
    const int gradeIndex = 2;
    string& nameToProperCase(string& name, size_t charCount);

public:
    StudentImportController();
    StudentImportController(const string& inFileName);
    virtual ~StudentImportController();
    void setInFileName(const string& fileName);
    Roster importRosterFromFile();
};
}

#endif // STUDENTIMPORTCONTROLLER_H
