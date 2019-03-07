#define DEBUG
#include "ArgDispatchController.h"
#include <cctype>
namespace controller
{
ArgDispatchController::ArgDispatchController(int argc, char* argv[])
{
    this->usageStatementCount = 0;

    //To bypass call to program
    argc--;
    argv++;

    if(argc == 0)
    {
        this->dispatchUsageStatement();
    }
    else
    {
        for(int i = 0; i < argc; i++)
        {
            if(argv[i] == "-c")
            {
                this->handleCArg(stoi(string(argv[i + this->cArgOffset])));
                i = i + this->cArgOffset;
            }
            else if(argv[i] == "-a")
            {
                this->handleAArg(string(argv[i + this->aArgFirstNameOffset]), string(argv[i + this->aArgLastNameOffset]), stoi(string(argv[i+this->aArgGradeOffset])));
                i = i + this->aArgOffset;
            }
            else if(argv[i] == "-g")
            {
                this->handleGArg();
            }
            else if(argv[i] == "-h")
            {
                this->handleHArg();
            }
            else if(argv[i] == "-sf")
            {
                this->handleSfArg();
            }
            else if(argv[i] == "-w")
            {
                this->handleWArg(stoi(string(argv[i+ this->wArgOffset])));
                i = i + this->wArgOffset;
            }
            else if(this->importFileName == "" )
            {
                this->import.setInFileName(string(argv[i]));
            }
            else if(this->importFileName != "" && this->outputFileName == "")
            {
                this->output.setOutFileName(string(argv[i]));
            }
            else if(i == argc-1 && this->importFileName == "")
            {
                this->dispatchUsageStatement();
            }
        }
        this->output.formatRosterData(this->import.importRosterFromFile());
    }
}

void ArgDispatchController::handleCArg(int countOfColumns)
{

}
void ArgDispatchController::handleAArg(const string& firstName, const string& lastName, int grade)
{

}
void ArgDispatchController::handleGArg()
{
    this->output.setGradeFlag();
}
void ArgDispatchController::handleHArg()
{

}
void ArgDispatchController::handleSfArg()
{
}
void ArgDispatchController::handleWArg(int columnCharWidth)
{

}

void ArgDispatchController::dispatchUsageStatement()
{
    if(this->usageStatementCount == 0)
    {
        this->output.sendUsageStatement();
    }
    this->usageStatementCount++;
}

ArgDispatchController::~ArgDispatchController()
{
    //dtor
}
}



