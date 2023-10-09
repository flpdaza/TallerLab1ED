#pragma once
#include <iostream>
#include "Software/Software.h"

using namespace std;

class NodoSoftware{
    public:
    Software *software;
    NodoSoftware *siguiente;
    NodoSoftware(Software *software){
        this -> software = software;
        this -> siguiente = nullptr;
    };
};
