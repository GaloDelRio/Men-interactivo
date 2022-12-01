#include "string.h"
#include <sstream>
using namespace std;

class Cafe{
	private:
		string tipoLeche,azucar,tamano;
		int precio;

	public:
		Cafe();
		Cafe(string,string,string,int);

		void setTipoLeche(string);
		void setAzucar(string);
		void setTamano(string);
		void setPrecio(int);

		string getTipoLeche ();
		string getAzucar ();
		string getTamano();
		int getPrecio ();
		string getCafe();
};

Cafe::Cafe(){
	tipoLeche="";
	azucar="";
	tamano="";
	precio=0;
}

Cafe::Cafe(string _tipoLeche, string _azucar, string _tamano, int _precio){
	tipoLeche=_tipoLeche;
	azucar=_azucar;
	tamano=_tamano;
	precio=_precio;
}

string Cafe::getTipoLeche() {
	return tipoLeche;
}

string Cafe::getAzucar() {
	return azucar;
}

string Cafe::getTamano() {
	return tamano;
}

int Cafe::getPrecio() {
	return precio;
}

void Cafe::setTipoLeche(string _tipoLeche){
	tipoLeche = _tipoLeche;
}

void Cafe::setAzucar(string _azucar){
	azucar = _azucar;
}

void Cafe::setTamano(string _tamano){
	tamano = _tamano;
}

void Cafe::setPrecio(int _precio){
	precio= _precio;
}

string Cafe::getCafe(){
    stringstream aux;
    aux<<"Tipo de leche: "<<tipoLeche<<endl;
    aux<<"Azucar: "<<azucar<<endl;
    aux<<"Tamanio: "<<tamano<<endl;
    aux<<"Precio: "<<precio<<endl;
    return aux.str();
}



