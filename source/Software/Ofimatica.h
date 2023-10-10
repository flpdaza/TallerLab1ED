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
    void aniadirArchivo(int);
    void eliminarArchivos(int);
};

Ofimatica::Ofimatica(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){
    this -> cantArchivos = 0;
};

Ofimatica::~Ofimatica(){};

int Ofimatica::getCantArchivos(){
    return this -> cantArchivos;
}

void Ofimatica::aniadirArchivo(int archivos){
    string respuesta;
    if(cantArchivos<10 ){
        if(cantArchivos + archivos <= 10){
            cantArchivos += archivos;
            cout<<archivos<<" Archivos agregados"<<endl;
            return;
        }else{
            cout<<"Se pasa del limite de 10 archivos"<<endl;
            cout<<"Solo puede agregar "<<10-cantArchivos<<" archivos mas"<<endl;
            return;
        }
        
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
    if(cantArchivos - n < 0){
        cout<<"No puede eliminar mas archivos de los que posee, ustede posee "<<cantArchivos<<" archivos"<<endl;
    }else{
        this -> cantArchivos -= n;
        cout<<n<<" Archivos eliminados"<<endl;
        cout<<"Ahora cuenta con"<<cantArchivos<<" archivos"<<endl;
    }
    
}