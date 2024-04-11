#ifndef OSX_H_INCLUDED
#define OSX_H_INCLUDED
#include <stdio.h>
#include <windows.h>///
#include <iostream>
#include <string.h>
#include "iApariencia.h"

using namespace std;

class OSX : public iApariencia
{
    public:
        OSX();
        virtual ~OSX();
        void PintarOSX();
    protected:
    private:
        char _osx_titulo[100];
        char _osx_area_trabajo[100];
        char _osx_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto (char*);
};

#endif // OSX_H_INCLUDED
