#ifndef LINUX_H_INCLUDED
#define LINUX_H_INCLUDED
#include <stdio.h>
#include <windows.h>///
#include <iostream>
#include <string.h>
#include "iApariencia.h"

using namespace std;

class OsLinux : public iApariencia
{
    public:
        OsLinux();
        virtual ~OsLinux();
        void PintarLinux();
    protected:
    private:
        char _lin_titulo[100];
        char _lin_area_trabajo[100];
        char _lin_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto (char*);
};



#endif // LINUX_H_INCLUDED
