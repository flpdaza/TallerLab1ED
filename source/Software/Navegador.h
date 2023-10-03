#pragma once
#include <iostream>
#include <vector>
#include "Software.h"

using namespace std;

class Navegador:public Software{
    private:
    vector<string> historial;
    public:
    Navegador(string, string, string, double);
    ~Navegador();
    vector<string> getHistorial();
    void setHistorial(string pag);
};

Navegador::Navegador(string nombre, string developer, string clasificacion, double precio):Software(nombre, developer, clasificacion, precio){};

vector<string> Navegador::getHistorial(){
    return this -> historial;
};

/*pendiente por resolver
void Navegador::setHistorial(string pag){

}
*/