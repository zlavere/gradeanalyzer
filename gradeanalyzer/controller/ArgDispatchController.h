#ifndef ARGDISPATCHCONTROLLER_H
#define ARGDISPATCHCONTROLLER_H

#include "StudentImportController.h"
#include "StudentOutputController.h"

using namespace controller;

namespace controller
{
class ArgDispatchController
{
private:
    StudentOutputController output;
    StudentImportController import;
    string outputFileName;
    string importFileName;
    const int cArgOffset = 1;
    const int aArgOffset = 3;
    const int wArgOffset = 1;
    const int aArgFirstNameOffset = 1;
    const int aArgLastNameOffset = 2;
    const int aArgGradeOffset = 3;
    int usageStatementCount;
    void dispatchUsageStatement();
    void handleCArg(int countOfColumns);
    void handleAArg(const string& firstName, const string& lastName, int grade);
    void handleGArg();
    void handleHArg();
    void handleSfArg();
    void handleWArg(int columnCharWidth);

public:
    ArgDispatchController(int argc, char* argv[]);
    virtual ~ArgDispatchController();
};
}

#endif // ARGDISPATCHCONTROLLER_H
