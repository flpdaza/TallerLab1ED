#pragma once
#include <iostream>
#include "../Usuario/Usuario.h"

using namespace std;

class NodoAmigos{
    private:
    Usuario* usuario;
    NodoAmigos *next;
    public:
    void insertarUsuario(NodoAmigos *, Usuario*);
    Usuario* getUsuario(NodoAmigos *&);
    Usuario *getUsuarioNombre(NodoAmigos *&, string);
};

void NodoAmigos::insertarUsuario(NodoAmigos *raiz, Usuario* u){
    if(raiz->usuario == NULL){
        cout<<"NULL"<<endl;
        raiz->usuario = u;
        return;
    }
    NodoAmigos *nuevoNodo = new NodoAmigos();
    nuevoNodo -> usuario = u;
    while(raiz -> next != NULL){
        raiz = raiz -> next;
    }

    raiz -> next = nuevoNodo;

};

Usuario* NodoAmigos::getUsuario(NodoAmigos *& raiz){
    return raiz -> usuario;
}

Usuario* NodoAmigos::getUsuarioNombre(NodoAmigos *&raiz, string nombre){
   
    if (raiz -> usuario == NULL){
        return NULL;
    }

    if(raiz -> usuario -> getUser() == nombre){
        return raiz -> usuario;
    }

    while(raiz -> usuario -> getUser() != nombre && raiz -> next != NULL){
        raiz = raiz -> next;
        if(raiz -> usuario -> getUser() == nombre){
            return raiz -> usuario;
        }
    }

    
    return NULL;



}