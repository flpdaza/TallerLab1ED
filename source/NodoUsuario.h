#pragma once
#include<iostream>
#include "Usuario/Usuario.h"

using namespace std;

class NodoUsuario{
    public:
    Usuario *usuario;
    NodoUsuario *siguiente;

    NodoUsuario(Usuario *usuario){
        this -> usuario = usuario;
        this -> siguiente = nullptr;
    }
};