#include <iostream>
#include "Usuario.h"

using namespace std;

int main(){

    Usuario* user1 = new Usuario();
    string nombre;
    cout<<"ingrese nombre usuario: ";
    cin>>nombre;
    cout<<""<<endl;
    user1 -> setNombre(nombre);

    string nombreUsuario = user1->getNombre();

    cout<<nombreUsuario<<endl;

    return 0;
}