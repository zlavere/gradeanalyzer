#ifndef STUDENTOUTPUTCONTROLLER_H
#define STUDENTOUTPUTCONTROLLER_H

#include "model/Roster.h"
using namespace model;

namespace controller
{
class StudentOutputController
{
private:
    string outFile;
    int columnWidth;
    int countOfColumns;
    int tabWidth;
    bool IsAGrade(int grade);
    bool IsBGrade(int grade);
    bool IsCGrade(int grade);
    bool IsDGrade(int grade);
    string& createColumnsOfStudents(vector<Student> students);
    bool gradeFlag;

public:
    StudentOutputController();
    StudentOutputController(const string& fileName);

    virtual ~StudentOutputController();
    void writeToOutputFile();
    void sendUsageStatement();
    void setOutFileName(const string& outFile);
    void formatRosterData(const Roster& roster);
    void setGradeFlag();
};
}


#endif // STUDENTOUTPUTCONTROLLER_H
