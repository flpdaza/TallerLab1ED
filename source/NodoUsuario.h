#pragma once
#include <iostream>
#include "Usuario/Usuario.h"

using namespace std;

class NodoUsuario{
    private:
    Usuario* usuario;
    NodoUsuario *next;
    NodoUsuario *prev;
    public:
    void insertarUsuario(NodoUsuario *&, Usuario*);
    Usuario* getUsuario(NodoUsuario *&);
    Usuario *getUsuarioNombre(NodoUsuario *&, string);
};

void NodoUsuario::insertarUsuario(NodoUsuario *& raiz, Usuario* u){
    if(raiz->usuario == NULL){
        raiz->usuario = u;
        return;
    }
    NodoUsuario *nuevoNodo = new NodoUsuario();
    nuevoNodo -> usuario = u;
    while(raiz -> next != NULL){
        raiz = raiz -> next;
    }

    raiz -> next = nuevoNodo;

};

Usuario* NodoUsuario::getUsuario(NodoUsuario *& raiz){
    return raiz -> usuario;
}

Usuario* NodoUsuario::getUsuarioNombre(NodoUsuario *&raiz, string nombre){
   
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