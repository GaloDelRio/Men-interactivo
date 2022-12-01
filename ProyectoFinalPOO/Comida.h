#ifndef COMIDA_H_
#define COMIDA_H_
#include "string.h"
#include <sstream>
using namespace std;

class Comida{
    private:
        string tamano;
        int precio;

    public:
        Comida();
        Comida(string, int);

        void setTamano(string);
        void setPrecio(int);

        string getTamano();
        int getPrecio();
        string getComida();
};

Comida::Comida(){
    tamano="";
    precio=0;
}

Comida::Comida(string _tamano, int _precio){
    tamano = _tamano;
    precio = _precio;
}

void Comida::setTamano(string _tamano){
    tamano=_tamano;
}

void Comida::setPrecio(int _precio){
    precio=_precio;
}

string Comida::getTamano(){
    return tamano;
}

int Comida::getPrecio(){
    return precio;
}

string Comida::getComida(){
    stringstream aux;
    aux<<"Tamanio: "<<tamano<<endl;
    aux<<"Precio: "<<precio<<endl;
    return aux.str();
}

#endif
