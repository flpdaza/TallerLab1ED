#pragma once
#include <iostream>
#include "Usuario.h"

class Admin : public Usuario{
    private:
        string correo;
        bool log;
    public:
        Admin(string, string, int, string, bool);
        ~Admin();
        void setCorreo(string);
        string getCorreo();
        bool getLog();
};

Admin::Admin(string nombre, string contrasena, int edad, string correo, bool log):Usuario(nombre, contrasena, edad){
    this -> correo = correo;
    this -> log = log;
};

Admin::~Admin(){};

void Admin::setCorreo(string correo){
    this -> correo = correo;
};

string Admin::getCorreo(){
    return this->correo;
};

bool Admin::getLog(){
    return this -> log;
}