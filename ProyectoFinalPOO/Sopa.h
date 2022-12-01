#ifndef SOPA_H_
#define SOPA_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;

class Sopa:Comida{
	private:
		string tipoSopa, temperatura;

	public:
		Sopa();
		Sopa(string, int, string, string);

		void setTipoSopa(string);
		void setTemperatura(string);

		string getTipoSopa();
		string getTemperatura();
		string getSopa();

};

Sopa::Sopa(string _tamano,int _precio, string _tipoSopa, string _temperatura):Comida(_tamano,_precio){
	tipoSopa = _tipoSopa;
	temperatura = _temperatura;
}

Sopa::Sopa() :Comida() {
	tipoSopa = "";
	temperatura = "";
}

void Sopa::setTipoSopa(string _tipoSopa){
	tipoSopa=_tipoSopa;
}

void Sopa::setTemperatura(string _temperatura){
	temperatura = _temperatura;
}

string Sopa::getTipoSopa (){
	return tipoSopa;
}

string Sopa::getTemperatura (){
	return temperatura;
}

string Sopa::getSopa(){
    stringstream aux;
    aux<<getComida();
    aux<<"Tipo de sopa: "<<tipoSopa<<endl;
    aux<<"Temperatura: "<<temperatura<<endl;
    return aux.str();
}

#endif
