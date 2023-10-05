#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Juego:public Software{
    private:
    string genero;
    public:
    Juego(string, string, string, double, string );
    ~Juego();
    string getGenero();
    void setGenero(string);
};

Juego::Juego(string nombre, string developer, string clasificacion,double precio, string genero):Software(nombre, developer, clasificacion, precio){
    this -> genero = genero;
};

Juego::~Juego(){};

string Juego::getGenero(){
    return this -> genero;
}

void Juego::setGenero(string genero){
    this -> genero = genero;
}