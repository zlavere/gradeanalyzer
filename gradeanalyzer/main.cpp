#include <iostream>
using namespace std;

#include "model/Roster.h"
using namespace model;

#include "io/FileReader.h"
using namespace io;

int main()
{
    Roster newRoster;
    newRoster.getStudentsWithGrade();
    FileReader reader("/home/gradeanalyzertestfiles/test.csv");
    reader.readInFileLines();
    return 0;
}
