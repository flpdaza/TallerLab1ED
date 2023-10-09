#pragma once
#include <iostream>
#include "../Usuario/Usuario.h"
using namespace std;

class Software{
    private:
    string nombre, developer, clasificacion;
    double precio;
    
    public:
    Software(string, string, string, double);
    ~Software();
    virtual string getNombre();
    virtual string getDeveloper();
    virtual string getClasificacion();
    double getPrecio();
    void setNombre(string);
    void setDeveloper(string);
    void setClasificacion(string);
    void setPrecio(double);
};

Software::Software(string nombre, string developer, string clasificacion, double precio){
    this -> nombre = nombre;
    this -> developer = developer;
    this -> clasificacion = clasificacion;
    this -> precio = precio;

};

Software::~Software(){};

void Software::setNombre(string nombre){
    this -> nombre = nombre;
}

void Software::setDeveloper(string developer){
    this -> developer = developer;
}

void Software::setClasificacion(string clasificacion){
    this -> clasificacion = clasificacion;
}

void Software::setPrecio(double precio){
    this -> precio = precio;
}

string Software::getNombre(){
    return this -> nombre;
}

string Software::getDeveloper(){
    return this -> developer;
}

string Software::getClasificacion(){
    return this -> clasificacion;
}



double Software::getPrecio(){
    return this -> precio;
}