#include "Comida.h"
#include <sstream>

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

