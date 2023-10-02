#include <iostream>
#include "Usuario/Usuario.h"
#include "Usuario/Admin.h"
#include "Usuario/UsuarioNormal.h"
#include "Usuario/Nino.h"

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

    Usuario* kid = new Nino("Felipe", "djadjsa", 12);

    if(kid->getLog()){
        cout<<"Este usuario es admin"<<endl;
    }
    else
    {
        if(kid->getEdad()<18)
        {
            cout<<"Este usuario es menor de edad"<<endl;
        }
    }
}