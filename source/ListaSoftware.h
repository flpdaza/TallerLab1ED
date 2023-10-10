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
    void imprimirSeguridad();
    void imprimirJuegos();
    Software *obtenerSoftware(string);
    Software *obtenerSoftwareSocial(string);
    void eliminarSoftware(string);
};

ListaSoftware::ListaSoftware(){this -> cabeza = nullptr;}

void ListaSoftware::eliminarSoftware(string nombre){
    if(cabeza == nullptr){
        cout<<"la lista está vacía"<<endl;
        return;
    }

    if(cabeza->software->getNombre() == nombre){
        NodoSoftware *temporal = cabeza;
        cabeza = cabeza ->siguiente;
        delete temporal;
        return;
    }

    NodoSoftware* aux = cabeza;
    while(aux -> siguiente != nullptr && aux -> siguiente -> software -> getNombre() != nombre){
        aux = aux -> siguiente;
    }

    if(aux -> siguiente != nullptr){
        NodoSoftware *temporal = aux -> siguiente;
        aux -> siguiente = aux -> siguiente -> siguiente;
        delete temporal;
    }
}

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

Software *ListaSoftware::obtenerSoftwareSocial(string nombre){
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

void ListaSoftware::imprimirSeguridad(){
    for(NodoSoftware *p = cabeza; p != nullptr; p = p->siguiente){
        if(p->software->getClasificacion() == "SEGURIDAD")   {
            p->software->getInfo();
        }

    }    
}
void ListaSoftware::imprimirJuegos(){
    for(NodoSoftware *p = cabeza; p != nullptr; p = p->siguiente){
        if(p->software->getClasificacion() == "JUEGO")   {
            p->software->getInfo();
            cout<<"Genero: "<<static_cast<Juego*>(p->software)->getGenero()<<endl;
        }

    }    
}