#include <iostream>
#include "Usuario.h"

using namespace std;

class UsuarioNormal : public Usuario{
    private:
        string correo;
    public:
        UsuarioNormal(string, string, int, string);
        ~UsuarioNormal();
        void setCorreo(string);
        string getCorreo();
};

UsuarioNormal::UsuarioNormal(string nombre, string contrasena, int edad, string correo):Usuario(nombre, contrasena, edad){
    this -> correo = correo;
};

UsuarioNormal::~UsuarioNormal(){};

void UsuarioNormal::setCorreo(string correo){
    this-> correo = correo;
};

string UsuarioNormal::getCorreo(){
    return this->correo;
};