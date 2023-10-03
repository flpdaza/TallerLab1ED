#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Ofimatica:public Software{
    private:
    int cantArchivos;
    public:
    Ofimatica(string, string, string, double, int);
    ~Ofimatica();
    int getCantArchivos();
    void setCantArchivo(int);
};

Ofimatica::Ofimatica(string nombre, string developer, string clasificacion, double precio, int canArchivos):Software(nombre, developer, clasificacion, precio){
    this -> cantArchivos = 0;
};
int Ofimatica::getCantArchivos(){
    return this -> cantArchivos;
}

void Ofimatica::setCantArchivo(int cantArchivos){
    this -> cantArchivos = cantArchivos;
};