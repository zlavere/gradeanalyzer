#include "Roster.h"

namespace model
{

Roster::Roster()
{
}

vector<Student> Roster::getStudentsWithGradeA()
{
    Student student("Luke", "Skywalker", 80);
    this->students.push_back(student);
    for(size_t i = 0; i < this->students.size(); i++)
    {
        cout << "Luke Skywalker" << endl;
    }
    return this->students;
}

void Roster::getStudentsWithGrade()
{
    Student student("Luke", "Skywalker", 80);
    this->students.push_back(student);

    for(size_t i = 0; i < this->students.size(); i++)
    {
        cout << "Luke Skywalker" << endl;
    }
}

void Roster::addStudent(const Student& student)
{
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
