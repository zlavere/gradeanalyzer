#include "Student.h"

namespace model
{

Student::Student()
{
    this->firstName = "";
    this->lastName = "";
    this->grade = 0;
}

Student::Student(const string& firstName, const string& lastName, int grade)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->grade = grade;
}

Student::~Student()
{
    //dtor
}

int Student::getGrade() const
{
    return this->grade;
}

string Student::getFirstName() const
{
    return this->firstName;
}

string Student::getLastName() const
{
    return this->lastName;
}

string Student::getFullName() const
{
    return this->firstName + " " + this->lastName;
}

void Student::setGrade(int grade)
{
    this->grade = grade;
}

void Student::setFirstName(const string& firstName)
{
    this->firstName = firstName;
}

void Student::setLastName(const string& lastName)
{
    this->lastName = lastName;
}

char Student::getLetterGrade()
{
    char letter = 'F';
    if(this->grade > 90)
    {
        letter = 'A';
    }
    else if (this->grade > 80)
    {
        letter = 'B';
    }
    else if (this->grade > 70)
    {
        letter = 'C';
    }
    else if (this->grade > 60)
    {
        letter = 'D';
    }
    return letter;
}
}
