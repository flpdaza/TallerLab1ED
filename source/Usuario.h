#pragma once
#include <iostream>

using namespace std;

class Usuario{
    private:
        string nombre;
        string contrasena;
        int edad;
    public:
        Usuario(string, string, int);
        ~Usuario();
        void setNombre(string);
        string getNombre();
        int getEdad();
};
Usuario::Usuario(string nombre, string contrasena, int edad){
    this -> nombre = nombre;
    this -> contrasena = contrasena;
    this -> edad = edad;
};

Usuario::~Usuario(){};

void Usuario::setNombre(string nombre){
    this -> nombre = nombre;
};

string Usuario::getNombre(){
    return nombre;
};

int Usuario::getEdad(){
    return edad;
}