#include <iostream>
#include "IOSWindows.h"
#include "Linux.h"
#include "OSX.h"
using namespace std;

int main()
{
    //Creamos un skin tipo windows
    OsWindows _win;
    _win.PintarWindow();
    OsLinux _lin;
    _lin.PintarLinux();

    return 0;
}
