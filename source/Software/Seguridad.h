#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Seguridad:public Software{
    private:
    string tipoMalware;
    public:
    Seguridad(string, string, string, double, string);
    ~Seguridad();
    string getTipoMalware();
    void setTipoMalware(string);
};

Seguridad::Seguridad(string nombre, string developer, string clasificacion, double precio, string tipoMalware):Software(nombre, developer, clasificacion, precio){
    this -> tipoMalware = tipoMalware;
};

string Seguridad::getTipoMalware(){
    return this -> tipoMalware;
};

void Seguridad::setTipoMalware(string tipoMalware){
    this -> tipoMalware = tipoMalware;
};