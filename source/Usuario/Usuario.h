#pragma once
#include <iostream>

using namespace std;

class Usuario{
    private:
        string user;
        string contrasena;
        int edad;
        string correo;
        bool log = false;
    public:
        Usuario(string, string, int);
        ~Usuario();
        void setUser(string);
        void setEdad(int);
        virtual void setCorreo(string);
        string getUser();
        string getContrasena();        
        int getEdad();
        virtual string getCorreo();
        virtual bool getLog();
        void getInfo();
};
Usuario::Usuario(string user, string contrasena, int edad){
    this -> user = user;
    this -> contrasena = contrasena;
    this -> edad = edad;
};

Usuario::~Usuario(){};

void Usuario::getInfo(){
    cout<<"\nNombre: "<<this -> user << endl;
    cout<<"Edad: "<<this -> edad << endl;
}

void Usuario::setUser(string user){
    this -> user = user;
};

void Usuario::setEdad(int edad){
    this -> edad = edad;
};

void Usuario::setCorreo(string correo){
    this -> correo = correo;
};

string Usuario::getUser(){
    return this -> user;
};

string Usuario::getContrasena(){
    return this -> contrasena;
};

int Usuario::getEdad(){
    return this -> edad;
};

string Usuario::getCorreo(){
    return this -> correo;
};

bool Usuario::getLog(){
    return this -> log;
};