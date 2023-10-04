#include <iostream>
#include "Usuario/Usuario.h"
#include "Usuario/Admin.h"
#include "Usuario/UsuarioNormal.h"
#include "Usuario/Nino.h"
#include "NodoUsuario.h"


using namespace std;

int main(){

    /*Admin* user1 = new Admin("Felipe", "djadjsa", 25, "correo@correo.cl", true);

    string nombreUsuario = user1->getNombre();
    int edad = user1->getEdad();
    
    if(user1->getLog()){
        cout<<"El usuario es admin"<<endl;
    }else{
        cout<<"El usuario no es admin"<<endl;
    }
    cout<<nombreUsuario<<" "<<edad<<endl;*/
    /*Admin *Admin1 = new Admin("Felipe", "djadjsa", 25, "correo@correo.cl", true);
    
    if(Admin1->getLog()){
        cout<<"El usuario es admin"<<endl;
    }else{
        cout<<"El usuario no es admin"<<endl;
    }*/
    
    /*Usuario* user1 = new UsuarioNormal("Felipe", "djadjsa", 25, "correo@correo.cl");

    if(user1->getLog()){
        cout<<"Este usuario es admin"<<endl;
    }else{
        cout<<"Este usuario NO es admin"<<endl;
    }*/

    /*Usuario* kid = new Nino("Felipe", "djadjsa", 12);

    if(kid->getLog()){
        cout<<"Este usuario es admin"<<endl;
    }
    else
    {
        if(kid->getEdad()<18)
        {
            cout<<"Este usuario es menor de edad"<<endl;
        }
    }*/

    NodoUsuario* raiz = new NodoUsuario();
    
    Usuario *admin1 = new Admin("Felipe", "djadjsa", 25, "correo@correo.cl", true);
    Usuario *admin2 = new Admin("Juan", "djadjsa", 25, "correo@correo.cl", true);
    Usuario *nino = new Nino("Jose", "dsdsds", 12);

    raiz -> insertarUsuario(raiz, admin1);
    raiz -> insertarUsuario(raiz, nino);

    Usuario *user = raiz -> getUsuarioNombre(raiz, "Jaime");




    if(user != NULL && user->getCorreo() != ""){
        cout<<"se encontro el usuario "<< user->getUser()<<" y su correo es "<< user->getCorreo()<<endl;
    }else if(user != NULL && user->getCorreo() == ""){
        cout<<"se encontro el usuario "<< user->getUser()<<" es un nino"<<endl;
    }else{
        cout<<"No se encontro el usuario"<<endl;
    }


}