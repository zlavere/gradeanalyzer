#include "Roster.h"

namespace model
{

Roster::Roster()
{
}

void Roster::addStudent(const Student& student)
{
    this->students.push_back(student);
}

void Roster::addStudent(const string& firstName, const string& lastName, int grade)
{
    Student student(firstName,lastName, grade);
    this->students.push_back(student);
}

vector<Student> Roster::getStudents() const
{
    return this->students;
}

Roster::~Roster()
{
    //dtor
}

}
