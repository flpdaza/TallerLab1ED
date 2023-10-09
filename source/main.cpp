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
#include "ListaUsuario.h"
#include "ListaSoftware.h"
using namespace std;

ListaUsuario poblarUsuarios();
ListaSoftware poblarSoftware();
ListaSoftware poblarJuegos(ListaSoftware);
void poblarOfimatica(ListaSoftware);
void poblarProduccion(ListaSoftware);
void poblarNavegadores(ListaSoftware);
void poblarSeguridad(ListaSoftware);
void poblarSocial(ListaSoftware);

int main(){

    ListaUsuario listaUsuarios = poblarUsuarios();
    ListaSoftware listaSoftwares = poblarSoftware();
  
    /*Usuario *user = raiz -> getUsuarioNombre(raiz, "Felipe");
    Software *soft = inicial -> getSoftwareClasificacion(inicial, "FACEBOOK");

    if(soft->getClasificacion() == "SOCIAL"){
        static_cast <Social*>(soft) -> setListaAmigos(user);
        Usuario *user2 = static_cast <Social*>(soft) -> getAmigoNombre(user->getUser());
        cout<<user2->getUser()<<endl;
    }*/

    
    /*Usuario *user = listaUsuarios.obtenerUsuario("Juan");

    if(user != nullptr){
        cout <<"Se encontro al usuario "<< user -> getUser()<<endl;
    }else{
        cout<<"Usuario no encontrado"<<endl;
    }

    listaUsuarios.imprimir();

    listaUsuarios.eliminar(user->getUser());

    listaUsuarios.imprimir();*/

    listaSoftwares.imprimir();
    Software* soft = listaSoftwares.obtenerSoftware("WORD");
    
    if(soft->getClasificacion() == "OFIMATICA"){
        cout<<static_cast<Ofimatica*> (soft) -> getCantArchivos()<<endl;
    }



}

ListaUsuario poblarUsuarios(){
    ListaUsuario lista;

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

    lista.agregar(admin1);
    lista.agregar(nino1);
    lista.agregar(nino2);
    lista.agregar(nino3);
    lista.agregar(nino4);
    lista.agregar(usuario1);
    lista.agregar(usuario2);
    lista.agregar(usuario3);
    lista.agregar(usuario4);
    lista.agregar(usuario5);
    lista.agregar(usuario6);
    lista.agregar(usuario7);
    lista.agregar(usuario8);
    lista.agregar(usuario9);
    lista.agregar(usuario10);

    return lista;
    
};

ListaSoftware poblarSoftware(){
    ListaSoftware lista;    
    lista = poblarJuegos(lista);
    poblarProduccion(lista);
    poblarNavegadores(lista);
    poblarOfimatica(lista);
    poblarSeguridad(lista);
    poblarSocial(lista);
    return lista;
}

ListaSoftware poblarJuegos(ListaSoftware lista){
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

   lista.agregar(juego1);
   lista.agregar(juego2);
   lista.agregar(juego3);
   lista.agregar(juego4);
   lista.agregar(juego5);
   lista.agregar(juego6);
   lista.agregar(juego7);
   lista.agregar(juego8);
   lista.agregar(juego9);
   lista.agregar(juego10);
   lista.agregar(juego11);
   lista.agregar(juego12);
   lista.agregar(juego13);
   lista.agregar(juego14);
   lista.agregar(juego15);
   lista.agregar(juego16);
   lista.agregar(juego17);
   lista.agregar(juego18);
   lista.agregar(juego19);
   lista.agregar(juego20);

   return lista;

};

void poblarProduccion(ListaSoftware lista){
    Software *produccion1 = new Produccion("OBS", "JORGE", "PRODUCCION", 22552.44, "STREAMING");
    Software *produccion2 = new Produccion("GALERIA", "MIGUEL", "PRODUCCION", 22112.44, "FOTOS");
    Software *produccion3 = new Produccion("CINE", "MATIAS", "PRODUCCION", 22232.44, "VIDEO");
    Software *produccion4 = new Produccion("REPRODUCTOR", "PEDRO", "PRODUCCION", 222, "MUSICA");

    lista.agregar(produccion1);
    lista.agregar(produccion2);
    lista.agregar(produccion3);
    lista.agregar(produccion4);
}

void poblarNavegadores(ListaSoftware lista){
    Software *navegador1 = new Navegador("CHROME", "FELIPE", "NAVEGADOR", 232323);
    Software *navegador2 = new Navegador("MOZILLA", "MATIAS", "NAVEGADOR", 4323);

    lista.agregar(navegador1);
    lista.agregar(navegador2);
}

void poblarOfimatica(ListaSoftware lista){
    Software *ofimatica1 = new Ofimatica("WORD", "AARON", "OFIMATICA", 44444);
    Software *ofimatica2 = new Ofimatica("PPT", "PAULA", "OFIMATICA", 88888);
    Software *ofimatica3 = new Ofimatica("EXCEL", "MARIA", "OFIMATICA", 777);
    Software *ofimatica4 = new Ofimatica("ONENOTE", "CARLOS", "OFIMATICA", 4545);

    lista.agregar(ofimatica1);
    lista.agregar(ofimatica2);
    lista.agregar(ofimatica3);
    lista.agregar(ofimatica4);
}

void poblarSeguridad(ListaSoftware lista){
    Software *seguridad1 = new Seguridad("SECURE", "JOSE", "SEGURIDAD", 323232, "RANSOMWARE");
    Software *seguridad2 = new Seguridad("SEGURIDAD", "JOSE", "SEGURIDAD", 323232, "SPYWARE");
    Software *seguridad3 = new Seguridad("ANTIVIRUS", "JOSE", "SEGURIDAD", 323232, "BOTNETS");
    Software *seguridad4 = new Seguridad("CELULA", "JOSE", "SEGURIDAD", 323232, "ROOTKITS");
    Software *seguridad5 = new Seguridad("SALVATION", "JOSE", "SEGURIDAD", 323232, "GUSANOS");
    Software *seguridad6 = new Seguridad("SECURITY", "JOSE", "SEGURIDAD", 323232, "TROYANOS");

    lista.agregar(seguridad1);
    lista.agregar(seguridad2);
    lista.agregar(seguridad3);
    lista.agregar(seguridad4);
    lista.agregar(seguridad5);
    lista.agregar(seguridad6);
}

void poblarSocial(ListaSoftware lista){
    Software *social1 = new Social("FACEBOOK", "ZUCKERBERG", "SOCIAL", 2323);
    Software *social2 = new Social("X", "MUSK", "SOCIAL", 0);

    lista.agregar(social1);
    lista.agregar(social2);
}