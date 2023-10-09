#pragma once
#include <iostream>
#include "Usuario/Usuario.h"
#include "NodoUsuario.h"

using namespace std;

class ListaUsuario{
    private:
    NodoUsuario *cabeza;
    public:
    ListaUsuario();
    void agregar(Usuario *);
    void imprimir();
    void eliminar(string);
    Usuario *obtenerUsuario(string);
};

ListaUsuario::ListaUsuario(){   this -> cabeza = nullptr;}

void ListaUsuario::agregar(Usuario *u){
    NodoUsuario *nuevo = new NodoUsuario(u);

    if(cabeza == nullptr){
        cabeza = nuevo;
    }else{
        NodoUsuario *aux= cabeza;
        while(aux -> siguiente != nullptr){
            aux = aux -> siguiente;
        }
        aux -> siguiente = nuevo;
    }

}

void ListaUsuario::eliminar(string nombre){
    if(cabeza == nullptr){
        cout<<"la lista está vacía"<<endl;
        return;
    }

    if(cabeza->usuario->getUser() == nombre){
        NodoUsuario *temporal = cabeza;
        cabeza = cabeza ->siguiente;
        delete temporal;
        return;
    }

    NodoUsuario* aux = cabeza;
    while(aux -> siguiente != nullptr && aux -> siguiente -> usuario -> getUser() != nombre){
        aux = aux -> siguiente;
    }

    if(aux -> siguiente != nullptr){
        NodoUsuario *temporal = aux -> siguiente;
        aux -> siguiente = aux -> siguiente -> siguiente;
        delete temporal;
    }
}

Usuario *ListaUsuario::obtenerUsuario(string nombre){
    for(NodoUsuario *p = cabeza; p != nullptr; p = p -> siguiente){
        if(p->usuario->getUser() == nombre){
            return p->usuario;
        }
    }

    return nullptr;
}

void ListaUsuario::imprimir(){
    for(NodoUsuario *p = cabeza; p!=nullptr; p = p->siguiente){
        p->usuario->getInfo();
    }
}