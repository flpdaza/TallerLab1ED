#pragma once
#include <iostream>

using namespace std;

class Software{
    private:
    string nombre, developer, clasificacion;
    Lista listaUsuarios;
    double precio;
    public:
    Software(string, string, string, Lista, double);
    ~Software();
    string getNombre();
    string getDeveloper();
    string getClasificacion();
    Lista getLista();
    double getPrecio();
    void setNombre(string);
    void setDeveloper(string);
    void setClasificacion(string);
    void setPrecio(double);
};

Software::Software(string nombre, string developer, string calificacion, Lista listaUsuarios, double precio){
    this -> nombre = nombre;
    this -> developer = developer;
    this -> clasificacion = clasificacion;
    this -> listaUsuarios = listaUsuarios;
    this -> precio = precio;

};

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

Lista Software::getLista(){
    return this -> listaUsuarios;
}

double Software::getPrecio(){
    return this -> precio;
}