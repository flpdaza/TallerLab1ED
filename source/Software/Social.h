#pragma once
#include <iostream>
#include "Software.h"
#include "../Usuario/Usuario.h"
#include "NodoAmigos.h"

using namespace std;

class Social:public Software{
    private:
    NodoAmigos *amigos;
    public:
    Social(string, string, string, double);
    ~Social();
    void setListaAmigos(Usuario *);
    Usuario *getAmigoNombre(string);

};

Social::Social(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){}

Social::~Social(){};

void Social::setListaAmigos(Usuario *u){
    
    amigos -> insertarUsuario(amigos, u);
};

Usuario* Social::getAmigoNombre(string nombre){
    return amigos -> getUsuarioNombre(amigos, nombre);
};

