#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Produccion:public Software{
    private:
    string tipo;
    public:
    Produccion(string, string, string, double, string);
    ~Produccion();
    string getTipo();
    void setTipo(string);
};

Produccion::Produccion(string nombre, string developer, string clasificacion, double precio, string tipo):Software(nombre, developer, clasificacion, precio){
    this -> tipo = tipo;
};

string Produccion::getTipo(){
    return this -> tipo;
};

void Produccion:: setTipo(string tipo){
    this -> tipo = tipo;
};