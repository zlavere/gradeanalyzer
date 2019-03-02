#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

namespace model
{
class Student
{
private:
    int grade;
    string firstName;
    string lastName;

public:
    Student();
    Student(const string& firstName, const string& lastName, int grade);
    ~Student();

    int getGrade() const;
    string getFirstName() const;
    string getLastName() const;
    string getFullName() const;
    void setGrade(int grade);
    void setFirstName(const string& firstName);
    void setLastName(const string& lastName);
    char getLetterGrade();
};
}
#endif // STUDENT_H
