#include "StudentImportController.h"

#include <locale>
#include <cctype>

namespace controller
{
StudentImportController::StudentImportController()
{
    //ctor
}

StudentImportController::StudentImportController(const string& inFileName)
{
    this->reader.setFileName(inFileName);
}

Roster StudentImportController::importRosterFromFile()
{
    vector<vector<string>> studentData = this->reader.getData();
    Roster roster;

    for(size_t i = 0; i < studentData.size(); i++)
    {
        int grade = stoi(studentData[i][gradeIndex]);
        roster.addStudent(this->nameToProperCase(studentData[i][this->firstNameIndex], studentData[i][this->firstNameIndex].size()), this->nameToProperCase(studentData[i][this->lastNameIndex], studentData[i][this->lastNameIndex].size()), grade);
    }

    return roster;
}

string& StudentImportController::nameToProperCase(string& name, size_t charCount)
{
    int i=0;
    for(char curr : name)
    {
        if(i == 0)
        {
            name[i] = toupper(name[i]);
        }
        else
        {
            name[i] = tolower(name[i]);
        }
        i++;
    }

    return name;
}

void StudentImportController::setInFileName(const string& inFileName)
{
    this->reader.setFileName(inFileName);
    cout << this->inFileName << endl;
}

StudentImportController::~StudentImportController()
{
    //dtor
}
}

