#pragma once
#include <iostream>
#include "Software.h"
#include "../Usuario/Usuario.h"
#include "../ListaUsuario.h"

using namespace std;

class Social:public Software{
    private:
    ListaUsuario listaAmigos;
    public:
    Social(string, string, string, double);
    ~Social();
    void setListaAmigos(Usuario *);
    Usuario *getAmigoNombre(string);

};

Social::Social(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){}

Social::~Social(){};

void Social::setListaAmigos(Usuario *u){
    listaAmigos.agregar(u);
    cout<<"Usuario "<<u->getUser()<<" agregado"<<endl;
}



