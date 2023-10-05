#pragma once
#include <iostream>
#include "Software.h"
#include "../Usuario/Usuario.h"

using namespace std;

class Social:public Software{
    private:
    public:
    Social(string, string, string, double);
    ~Social();
    void setListaAmigos(Usuario);
};

Social::Social(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){

}



/*por terminar la logica    
void Social::setListaAmigos(Usuario u){

}
*/