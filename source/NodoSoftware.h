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

Software* NodoSoftware::getSoftwareClasificacion(NodoSoftware *& raiz, string nombre){
    if(raiz -> software == NULL){
        cout<<"NULL"<<endl;
        return NULL;

    }

    if(raiz -> software -> getNombre() == nombre){
        cout<<"if"<<endl;
        return raiz -> software;
    }

    while(raiz -> next != NULL && raiz -> software -> getNombre() != nombre){
        cout<<"while"<<endl;
        raiz = raiz -> next;
        if(raiz -> software -> getNombre() == nombre){
            return raiz -> software;
        }
    }
    cout<<"no se encontro"<<endl;
    return NULL;
}