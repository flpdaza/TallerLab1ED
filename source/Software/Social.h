#pragma once
#include <iostream>
#include "Software.h"
#include "../Usuario/Usuario.h"

using namespace std;

class Social:public Software{
    public:
    Social(string, string, string, double);
    ~Social();
    void setListaAmigos(Usuario *);
    Usuario *getAmigoNombre(string);

};

Social::Social(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){}

Social::~Social(){};



