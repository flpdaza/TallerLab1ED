#include <iostream>
#include "Usuario.h"
#include "Admin.h"
#include "UsuarioNormal.h"

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
    
    Usuario* user1 = new UsuarioNormal("Felipe", "djadjsa", 25, "correo@correo.cl");

    if(user1->getLog()){
        cout<<"Este usuario es admin"<<endl;
    }else{
        cout<<"Este usuario NO es admin"<<endl;
    }


}