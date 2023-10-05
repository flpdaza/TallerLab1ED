#include <iostream>
#include "Software/Software.h"

using namespace std;

class NodoSoftware{
    private:
    Software *software;
    NodoSoftware *next;
    public:
    void insertarSoftware(NodoSoftware*, Software*);
    Software *getSoftwareClasificacion(NodoSoftware*&, string);
};

void NodoSoftware::insertarSoftware(NodoSoftware *raiz, Software *s){
    if(raiz -> software == NULL){
        raiz -> software = s;
        return;
    }

    NodoSoftware *nuevoNodo = new NodoSoftware();
    nuevoNodo -> software = s;

    while(raiz -> next != NULL){
        raiz = raiz -> next;
    }

    raiz -> next = nuevoNodo;
}

Software* NodoSoftware::getSoftwareClasificacion(NodoSoftware *& raiz, string clasificacion){
    if(raiz -> software == NULL){
        return NULL;
    }

    if(raiz -> software -> getClasificacion() == clasificacion){
        return raiz -> software;
    }

    while(raiz -> next != NULL && raiz -> software -> getClasificacion() != clasificacion){
        raiz = raiz -> next;
        if(raiz -> software -> getClasificacion() == clasificacion){
            return raiz -> software;
        }
    }

    return NULL;
}