#include <iostream>
using namespace std;

#include "controller/StudentImportController.h"
using namespace controller;

int main()
{
    StudentImportController controller("/home/zach/gradeanalyzertestfiles/test.csv");
    Roster roster = controller.generateRosterFromFile();
    vector<Student> students = roster.getStudents();
    for(size_t i = 0; i < students.size(); i++)
    {
        cout << students[i].getFirstName() << " " << students[i].getLastName() << " : " << students[i].getGrade() << endl;
    }

    return 0;
}
