#include <iostream>
using namespace std;

#include "model/Roster.h"
using namespace model;

#include "io/FileReader.h"
using namespace io;

int main()
{
    cout << "Hello world!" << endl;
    Roster newRoster;
    newRoster.getStudentsWithGrade();
    FileReader reader("/home/zach/gradeanalyzertestfiles/test.csv");
    reader.readInFileLines();
    return 0;
}
