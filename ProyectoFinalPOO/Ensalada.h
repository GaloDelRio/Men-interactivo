#ifndef ENSALADA_H_
#define ENSALADA_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;

class Ensalada:Comida{
	private:
		string tipoHoja,topping;

	public:
		Ensalada();
		Ensalada(string,int,string,string);

		void setTipoHoja(string);
		void setTopping(string);

		string getTipoHoja ();
		string getTopping ();
		string getEnsalada();
};

Ensalada::Ensalada(string _tamano,int _precio,string _tipoHoja,string _topping): Comida(_tamano,_precio){
	tipoHoja = _tipoHoja;
	topping = _topping;
}

Ensalada::Ensalada() :Comida() {
	tipoHoja = "";
	topping = "";
}

void Ensalada::setTipoHoja(string _tipoHoja){
	tipoHoja = _tipoHoja;
}

void Ensalada::setTopping(string _topping){
	topping = _topping;
}

string Ensalada::getTipoHoja (){
	return tipoHoja;
}

string Ensalada::getTopping (){
	return topping  ;
}

string Ensalada::getEnsalada(){
    stringstream aux;
    aux<<getComida();
    aux<<"Tipo de hoja: "<<tipoHoja<<endl;
    aux<<"Topping: "<<topping<<endl;
    return aux.str();
}

#endif
