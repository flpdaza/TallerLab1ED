#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class Nino:public Usuario{
    public:
    Nino(string, string, int);
    ~Nino();
};

Nino::Nino(string user, string contrasena, int edad):Usuario(user, contrasena, edad){
    
};