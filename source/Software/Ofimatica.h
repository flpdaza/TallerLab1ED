#pragma once
#include <iostream>
#include "Software.h"
#include <cctype>
#include <string>

using namespace std;

class Ofimatica:public Software{
    private:
    int cantArchivos;
    public:
    Ofimatica(string, string, string, double);
    ~Ofimatica();
    int getCantArchivos();
    void aniadirArchivo();
    void eliminarArchivos(int);
};

Ofimatica::Ofimatica(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){
    this -> cantArchivos = 0;
};

Ofimatica::~Ofimatica(){};

int Ofimatica::getCantArchivos(){
    return this -> cantArchivos;
}

void Ofimatica::aniadirArchivo(){
    string respuesta;
    if(cantArchivos<=10){
        cantArchivos++;
    }else{
        cout<<"Usted alcanzo el tope de archivos"<<endl;
        cout<<"Desea eliminar archivos? (s/n): "<<endl;
        cin>>respuesta;
    }
    
    if(respuesta == "s" || respuesta == "S"){
        int cantidad;
        cout<<"cuantos archivos desea eliminar? "<<endl;
        cin>>cantidad;
        eliminarArchivos(cantidad);
    }else if(respuesta != "s" && respuesta != "S" && respuesta != "N" && respuesta !="n"){
        cout<<"respuesta invalida"<<endl;
    }
    
    
};

void Ofimatica::eliminarArchivos (int n){
    this -> cantArchivos -= n;
}