#define DEBUG

#include <iostream>
using namespace std;

#include "controller/StudentImportController.h"
#include "controller/ArgDispatchController.h"
using namespace controller;

int main(int argc, char* argv[])
{

    ArgDispatchController dispatch(argc, argv);

#ifdef DEBUG
    cout << "Arguments Provided: " << argc << endl;
    for(int i = 0; i < argc; i++)
    {
        cout << "argv["<< i << "] = " << argv[i] << endl;
    }
    cout << "Students Read from Test File (/home/zach/gradeanalyzertestfiles/infileTest.csv):" << endl;
    StudentImportController controller("/home/zach/gradeanalyzertestfiles/infileTest.csv");
    Roster roster = controller.importRosterFromFile();
    vector<Student> students = roster.getStudents();

    for(size_t i = 0; i < students.size(); i++)
    {
        cout << students[i].getFirstName() << " " << students[i].getLastName() << " : " << students[i].getGrade() << endl;
    }
#endif

    return 0;
}
