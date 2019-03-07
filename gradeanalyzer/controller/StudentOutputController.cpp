#include "StudentOutputController.h"

#include <iomanip>
using namespace std;

namespace controller
{
StudentOutputController::StudentOutputController()
{
    this->columnWidth = 20;
    this->countOfColumns = 4;
    this->gradeFlag;
}

StudentOutputController::StudentOutputController(const string& fileName) : StudentOutputController()
{
    this->outFile = fileName;
}

void StudentOutputController::formatRosterData(const Roster& roster)
{
    vector<Student> studentsWithA;;
    vector<Student> studentsWithB;
    vector<Student> studentsWithC;
    vector<Student> studentsWithD;
    vector<Student> studentsWithF;
    for(Student curr : roster.getStudents())
    {
        if(this->IsAGrade(curr.getGrade()))
        {
            studentsWithA.push_back(curr);
        }
        else if(this->IsBGrade(curr.getGrade()))
        {
            studentsWithB.push_back(curr);
        }
        else if(this->IsCGrade(curr.getGrade()))
        {
            studentsWithC.push_back(curr);
        }
        else if(this->IsDGrade(curr.getGrade()))
        {
            studentsWithD.push_back(curr);
        }
        else
        {
            studentsWithF.push_back(curr);
        }
    }
    if(studentsWithA.size() > 0)
    {
        cout << "Students with an A:" << endl;
        this->createColumnsOfStudents(studentsWithA);
    }

    if(studentsWithB.size() > 0)
    {
        cout << "Students with a B:" << endl;
        this->createColumnsOfStudents(studentsWithB);
    }
    if(studentsWithC.size() > 0)
    {
        cout << "Students with a C:" << endl;
        this->createColumnsOfStudents(studentsWithC);
    }
    if(studentsWithD.size() > 0)
    {
        cout << "Students with a D:" << endl;
        this->createColumnsOfStudents(studentsWithD);
    }
    if(studentsWithF.size() > 0)
    {
        cout << "Students with a F:" << endl;
        this->createColumnsOfStudents(studentsWithF);
    }
}

string& StudentOutputController::createColumnsOfStudents(vector<Student> students)
{
    string result = "";
    int i = 0;
    for(Student curr : students)
    {
        string fullName = curr.getFirstName() + " " + curr.getLastName();
        if(this->gradeFlag)
        {
            cout << setw(this->columnWidth) << fullName  << " : " << curr.getGrade();
        } else {
            cout << setw(this->columnWidth) << fullName;
        }

        i++;
        if(i == this->countOfColumns)
        {
            i = 0;
            cout << endl;
        }
    }
    cout << endl;
}

void StudentOutputController::setGradeFlag()
{
    this->gradeFlag = true;
}


bool StudentOutputController::IsAGrade(int grade)
{
    return grade >= 90 && grade < 100;
}
bool StudentOutputController::IsBGrade(int grade)
{
    return grade >= 80 && grade < 90;
}
bool StudentOutputController::IsCGrade(int grade)
{
    return grade >=70 && grade < 80;
}
bool StudentOutputController::IsDGrade(int grade)
{
    return grade >= 60 && grade < 70;
}

void StudentOutputController::sendUsageStatement()
{
    cout << "usage: gradeanalyzer infile [outfile] [options]" << endl;
    cout << "Performs a simple grade analysis of the students and grades contained in infile" << endl;
    cout << setw(this->columnWidth) << "\tinfile" << left << "The input file to analyze the grades of." << endl;
    cout << setw(this->columnWidth) << "\t[outfile]" << left << "The output file to write the output to." << endl;
    cout << "options:" << endl;
    cout << setw(this->columnWidth) << "\t--help" << left << "Displays this usage statement." << endl;
    cout << setw(this->columnWidth) << "\t-c <number>" << left <<"Changes the number of output columns to the number specified. The default number of columns is 4." << endl;
    cout << setw(this->columnWidth) << "\t-a <first last grade>" << left << "Add the specified student (case insensitive) to the output. E.g., -a john doe 85 would add john doe with a 85 grade to output" << endl;
    cout << setw(this->columnWidth) << "\t-g" << left <<"Displays student grade with the output." << endl;
    cout << setw(this->columnWidth) << "\t-h" << left <<"Displays a histogram of the grades in addition to the other output." << endl;
    cout << setw(this->columnWidth) << "\t-sf" << left <<"Displays the output in alphabetic order by student’s first name. The default order is by student’s last name." << endl;
    cout << setw(this->columnWidth) << "\t-w <number>" << left << "Changes the column width for the output columns. The default column width is 20." << endl;
}

void StudentOutputController::setOutFileName(const string& outFile)
{
    this->outFile = outFile;
}
StudentOutputController::~StudentOutputController()
{
    //dtor
}
}

