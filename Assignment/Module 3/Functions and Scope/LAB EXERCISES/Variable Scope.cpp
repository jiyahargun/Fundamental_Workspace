#include <iostream>
using namespace std;

int globalVar = 100;

void showGlobal() 
{
    cout << "Inside showGlobal - globalVar: " << globalVar << endl;
}

void showLocal() 
{
    int globalVar = 50;
    cout << "Inside showLocal - local globalVar: " << globalVar << endl;
}

int main()
{
    cout << "In main - globalVar: " << globalVar << endl;

    showGlobal();
    showLocal();

    cout << "Back in main - globalVar: " << globalVar << endl;

    return 0;
}
