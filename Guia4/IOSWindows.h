#ifndef IOSWINDOWS_H_INCLUDED
#define IOSWINDOWS_H_INCLUDED
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"

using namespace std;

class OsWindows : public iApariencia
{
    public:
        OsWindows();
        virtual ~OsWindows();
        void PintarWindow();
    protected:
    private:
        char _win_titulo[100];
        char _win_area_trabajo[100];
        char _win_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto (char*);
};


#endif // IOSWINDOWS_H_INCLUDED
