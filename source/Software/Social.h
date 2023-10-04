#pragma once
#include <iostream>
#include "Software.h"
#include "Usuario/Usuario.h"

using namespace std;

class Social:public Software{
    private:
    Lista listaAmigos;
    public:
    Social(string, string, string, double);
    ~Social();
    Lista getListaAmigos();
    void setListaAmigos(Usuario);
};

Social::Social(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){
    this -> listaAmigos = new Lista();
}

Lista Social::getListaAmigos(){
    return this -> listaAmigos;
}

/*por terminar la logica    
void Social::setListaAmigos(Usuario u){

}
*/