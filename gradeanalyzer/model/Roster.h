#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <vector>
using namespace std;

#include "Student.h"
using namespace model;

namespace model
{
class Roster
{
private:
    vector<Student> students;

public:
    Roster();
    virtual ~Roster();
    vector<Student> getStudentsWithGradeA();
    vector<Student> getStudents() const;
    void getStudentsWithGrade();
    void addStudent(const Student& student);
    size_t size() const;
};
}


#endif // ROSTER_H
