#pragma once
#include <iostream>
#include "NodoSoftware.h"

using namespace std;

class ListaSoftware{
    private:
    NodoSoftware *cabeza;
    public:
    ListaSoftware();
    void agregar(Software *);
    void imprimir();
    Software *obtenerSoftware(string);
};

ListaSoftware::ListaSoftware(){this -> cabeza = nullptr;}

void ListaSoftware::agregar(Software *s){
    NodoSoftware *nuevo = new NodoSoftware(s);

    if(cabeza == nullptr){
        cabeza = nuevo;
    }else{
        NodoSoftware *aux= cabeza;
        while(aux -> siguiente != nullptr){
            aux = aux -> siguiente;
        }
        aux -> siguiente = nuevo;
    }
}

Software *ListaSoftware::obtenerSoftware(string nombre){
    for(NodoSoftware *p = cabeza; p != nullptr; p = p->siguiente){
        if(p->software->getNombre() == nombre){
            return p->software;
        }
    }

    cout<<"El software no se encontro"<<endl;
    return nullptr;
}

void ListaSoftware::imprimir(){
    for(NodoSoftware *p = cabeza; p != nullptr; p = p->siguiente){
        p->software->getInfo();   

    }

    
}