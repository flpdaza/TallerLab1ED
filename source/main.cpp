#include <iostream>
#include "Usuario/Usuario.h"
#include "Usuario/Admin.h"
#include "Usuario/UsuarioNormal.h"
#include "Usuario/Nino.h"
#include "Software/Software.h"
#include "Software/Juego.h"
#include "Software/Navegador.h"
#include "Software/Ofimatica.h"
#include "Software/Produccion.h"
#include "Software/Seguridad.h"
#include "Software/Social.h"
#include "NodoUsuario.h"
#include "NodoSoftware.h"

using namespace std;

void poblarUsuarios(NodoUsuario *);
void poblarJuegos(NodoSoftware *);

int main(){

    NodoUsuario* raiz = new NodoUsuario();
    NodoSoftware* incial = new NodoSoftware();

    poblarJuegos(incial);
    poblarUsuarios(raiz);


    //Usuario *user = raiz -> getUsuarioNombre(raiz, "Felipe");
    

}

void poblarUsuarios(NodoUsuario *raiz){
    Usuario *admin1 = new Admin("Juan", "juan123", 25, "correo@correo.cl", true);
    Usuario *nino1 = new Nino("Jose", "jose123", 12);
    Usuario *nino2 = new Nino("Miguel", "miguel123", 13);
    Usuario *nino3 = new Nino("Carlos", "carlos123", 14);
    Usuario *nino4 = new Nino("Pedro", "pedro123", 15);
    Usuario *usuario1 = new UsuarioNormal("Felipe", "felipe123", 25, "felipe@correo.cl");
    Usuario *usuario2 = new UsuarioNormal("Matias", "matias123", 25, "matias@correo.cl");
    Usuario *usuario3 = new UsuarioNormal("Cristian", "cristian123", 25, "cristian@correo.cl");
    Usuario *usuario4 = new UsuarioNormal("Pablo", "pablo123", 25, "pablo@correo.cl");
    Usuario *usuario5 = new UsuarioNormal("Eric", "eric123", 25, "eric@correo.cl");
    Usuario *usuario6 = new UsuarioNormal("Franco", "franco123", 25, "franco@correo.cl");
    Usuario *usuario7 = new UsuarioNormal("Daniel", "daniel123", 25, "daniel@correo.cl");
    Usuario *usuario8 = new UsuarioNormal("Ignacio", "ignacio123", 25, "ignacio@correo.cl");
    Usuario *usuario9 = new UsuarioNormal("Arturo", "arturo123", 25, "arturo@correo.cl");
    Usuario *usuario10 = new UsuarioNormal("Armando", "armando123", 25, "armando@correo.cl");

    raiz->insertarUsuario(raiz, admin1);
    raiz->insertarUsuario(raiz, nino1);
    raiz->insertarUsuario(raiz, nino2);
    raiz->insertarUsuario(raiz, nino3);
    raiz->insertarUsuario(raiz, nino4);
    raiz->insertarUsuario(raiz, usuario1);
    raiz->insertarUsuario(raiz, usuario2);
    raiz->insertarUsuario(raiz, usuario3);
    raiz->insertarUsuario(raiz, usuario4);
    raiz->insertarUsuario(raiz, usuario5);
    raiz->insertarUsuario(raiz, usuario6);
    raiz->insertarUsuario(raiz, usuario7);
    raiz->insertarUsuario(raiz, usuario8);
    raiz->insertarUsuario(raiz, usuario9);
    raiz->insertarUsuario(raiz, usuario10);
};

void poblarJuegos(NodoSoftware *inicial){
    Software *juego1 = new Juego("COD", "JUAN", "JUEGO", 22000, "SHOOTER");
    cout<<"AGREGANDO JUEGO"<<endl;

    cout<<static_cast<Juego*>(juego1) -> getClasificacion()<<endl;

};