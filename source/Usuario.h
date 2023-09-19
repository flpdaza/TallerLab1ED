#pragma once
#include <iostream>

using namespace std;

class Usuario{
    private:
    string nombre;
    string contrasena;
    int edad;
    public:
    Usuario();
    void setNombre(string);
    string getNombre();
};

Usuario::Usuario(){};

void Usuario::setNombre(string nombre){
    this -> nombre = nombre;
};

string Usuario::getNombre(){
    return this -> nombre;
};