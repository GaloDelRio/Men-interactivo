#ifndef PLATOFUERTE_H_
#define PLATOFUERTE_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;

class PlatoFuerte:Comida{
	private:
		string tipoCarne, termino;

	public:
		PlatoFuerte();
		PlatoFuerte(string, int, string, string);

		void setTipoCarne(string);
		void setTermino(string);

		string getTipoCarne();
		string getTermino();
		string getPlatoFuerte();
};


PlatoFuerte::PlatoFuerte(string _tamano,int _precio,string _tipoCarne,string _termino):Comida(_tamano,_precio){
	tipoCarne = _tipoCarne;
	termino = _termino;
}

PlatoFuerte::PlatoFuerte():Comida(){
	tipoCarne = "";
	termino = "";
}

void PlatoFuerte::setTipoCarne(string _tipoCarne){
	tipoCarne=_tipoCarne;
}

void PlatoFuerte::setTermino(string _termino){
	termino = _termino;
}

string PlatoFuerte::getTipoCarne(){
	return tipoCarne;
}

string PlatoFuerte::getTermino(){
	return termino  ;
}

string PlatoFuerte::getPlatoFuerte(){
    stringstream aux;
    aux<<getComida();
    aux<<"Tipo de carne: "<<tipoCarne<<endl;
    aux<<"Termino: "<<termino<<endl;
    return aux.str();
}

#endif
