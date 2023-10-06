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
void poblarSoftware(NodoSoftware *);
void poblarJuegos(NodoSoftware *);
void poblarOfimatica(NodoSoftware *);
void poblarProduccion(NodoSoftware *);
void poblarNavegadores(NodoSoftware *);
void poblarSeguridad(NodoSoftware *);
void poblarSocial(NodoSoftware *);

int main(){

    NodoUsuario* raiz = new NodoUsuario();
    NodoSoftware* inicial = new NodoSoftware();

    poblarSoftware(inicial);
    poblarUsuarios(raiz);


    Usuario *user = raiz -> getUsuarioNombre(raiz, "Felipe");
    Software *soft = inicial -> getSoftwareClasificacion(inicial, "FARM SIMULATOR");

    cout<<soft -> getNombre()<<endl;

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

void poblarSoftware(NodoSoftware *inicial){
    poblarJuegos(inicial);
    poblarProduccion(inicial);
    poblarNavegadores(inicial);
    poblarOfimatica(inicial);
    poblarSeguridad(inicial);
    poblarSocial(inicial);
}

void poblarJuegos(NodoSoftware *inicial){
    Software *juego1 = new Juego("COD", "JUAN", "JUEGO", 22000, "SHOOTER");
    Software *juego2 = new Juego("CSGO", "JUAN", "JUEGO", 22000, "SHOOTER");
    Software *juego3 = new Juego("KF", "JUAN", "JUEGO", 22000, "GORE");
    Software *juego4 = new Juego("DOOM", "JUAN", "JUEGO", 22000, "GORE");
    Software *juego5 = new Juego("ZELDA", "JUAN", "JUEGO", 22000, "AVENTURA");
    Software *juego6 = new Juego("KIRBY", "JUAN", "JUEGO", 22000, "AVENTURA");
    Software *juego7 = new Juego("LOL", "JUAN", "JUEGO", 22000, "MMORPG");
    Software *juego8 = new Juego("DOTA", "JUAN", "JUEGO", 9999, "MMORPG");
    Software *juego9 = new Juego("FIFA", "JUAN", "JUEGO", 5555, "DEPORTE");
    Software *juego10 = new Juego("TENIS", "JUAN", "JUEGO", 54545, "DEPORTE");
    Software *juego11 = new Juego("GTA", "JUAN", "JUEGO", 15150, "ACCION");
    Software *juego12 = new Juego("MAXPAYNE", "JUAN", "JUEGO", 999, "ACCION");
    Software *juego13 = new Juego("MARIO", "JUAN", "JUEGO", 8888, "PLATAFORMA");
    Software *juego14 = new Juego("MEATBALL", "JUAN", "JUEGO", 25.33, "PLATAFORMA");
    Software *juego15 = new Juego("INVASION", "JUAN", "JUEGO", 3333, "ARCADE");
    Software *juego16 = new Juego("ALIEN", "JUAN", "JUEGO", 3000, "ARCADE");
    Software *juego17 = new Juego("AJEDREZ", "JUAN", "JUEGO", 27000, "ESTRATEGIA");
    Software *juego18 = new Juego("DAMAS", "JUAN", "JUEGO", 22500, "ESTRATEGIA");
    Software *juego19 = new Juego("VR", "JUAN", "JUEGO", 200, "SIMULACION");
    Software *juego20 = new Juego("FARM SIMULATOR", "JUAN", "JUEGO", 2000, "SIMULACION");

    inicial->insertarSoftware(inicial, juego1);
    inicial->insertarSoftware(inicial, juego2);
    inicial->insertarSoftware(inicial, juego3);
    inicial->insertarSoftware(inicial, juego4);
    inicial->insertarSoftware(inicial, juego5);
    inicial->insertarSoftware(inicial, juego6);
    inicial->insertarSoftware(inicial, juego7);
    inicial->insertarSoftware(inicial, juego8);
    inicial->insertarSoftware(inicial, juego9);
    inicial->insertarSoftware(inicial, juego10);
    inicial->insertarSoftware(inicial, juego11);
    inicial->insertarSoftware(inicial, juego12);
    inicial->insertarSoftware(inicial, juego13);
    inicial->insertarSoftware(inicial, juego14);
    inicial->insertarSoftware(inicial, juego15);
    inicial->insertarSoftware(inicial, juego16);
    inicial->insertarSoftware(inicial, juego17);
    inicial->insertarSoftware(inicial, juego18);
    inicial->insertarSoftware(inicial, juego19);
    inicial->insertarSoftware(inicial, juego20);
};

