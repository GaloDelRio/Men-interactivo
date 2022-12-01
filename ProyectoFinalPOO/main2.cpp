#include <iostream>
#include <cmath>
#include "Sopa.h"
#include "Ensalada.h"
#include "Cafe.h"
#include "PlatoFuerte.h"
using namespace std;

string tipo_sopaSopa() { 
    int v;
    v = 0;
    string _tipo_sopa;
    while (v == 0) {
        cout << "Para las Sopas tenemos tres opciones \n1) Sopa de vegetales \n2) Sopa de pasta \n3) Sopa de papa"; getline(cin,_tipo_sopa);
        if (_tipo_sopa == "Sopa de vegetales" || _tipo_sopa == "Sopa de pasta" || _tipo_sopa == "Sopa de papa") {
            return _tipo_sopa;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tipo_sopa;
};

string temperatura_sopaSopa() { 
    int v;
    v = 0;
    string _temperatura_sopa;
    while (v == 0) {
        cout << "Para las Sopas tenemos tres opciones \n1) Caliente \n2) Tibia"; cin>>_temperatura_sopa;
        if (_temperatura_sopa == "Caliente" || _temperatura_sopa == "Tibia") {
            return _temperatura_sopa;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _temperatura_sopa;
};

string tamanoSopa() { 
    int v;
    v = 0;
    string _tamano;
    while (v == 0) {
        cout << "De que tamano quiere la sopa \n1) Grande \n2) Mediana \n3) Chica" << endl;
        cin >> _tamano;
        if (_tamano == "Grande" || _tamano == "Mediana" || _tamano == "Chica") {
            return _tamano;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tamano;
}

int costoSopa(string _tamano) { 
    int _precio_sopa;
    _precio_sopa = 0;
    int _costo;
    _costo=0;
    if (_tamano == "Grandes") {
        _precio_sopa = 45;
    }
    if (_tamano == "Medianas") {
        _precio_sopa = 40;
    }
    if (_tamano == "Chicas") {
        _precio_sopa = 30;
    }
    return _costo;
}

string eleccion_hojaEnsalada() { 
    int v;
    v = 0;
    string _eleccion_hoja;
    while (v == 0) {
        cout << "Para las el tipo de hoja tenemos tres opciones \n1) Romana \n2) Lechuga \n3) Tracadero"; cin>>_eleccion_hoja;
        if (_eleccion_hoja == "Romana" || _eleccion_hoja == "Lechuga" || _eleccion_hoja == "Tracadero") {
            return _eleccion_hoja;
            v = 1;    
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _eleccion_hoja;
}

string toppingEnsalada() { 
    int v;
    v = 0;
    string _topping;
    while (v == 0) {
        cout << "Para las el tipo de hoja tenemos tres opciones \n1) Romana \n2) Lechuga \n3) Tracadero"; cin>>_topping;
        if (_topping == "Aceitunas" || _topping == "Pepino" || _topping == "Pasta") {
            return _topping;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _topping;
}

string tamanoEnsalada() { 
    int v;
    v = 0;
    string _tamano;
    while (v == 0) {
        cout << "De que tamano quiere la Ensalada \n1) Grande \n2) Mediana \n3) Chica" << endl;
        cin >> _tamano;
        if (_tamano == "Grande" || _tamano == "Mediana" || _tamano == "Chica") {
            return _tamano;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tamano;
}

int costoEnsalada(string _tamano) { 
       int _precio_ensalada;
        _precio_ensalada = 0;
        int _costo;
        _costo=0;

    if (_tamano == "Grandes") {
        _precio_ensalada = 45;
    }
    if (_tamano == "Medianas") {
        _precio_ensalada = 40;
    }
    if (_tamano == "Chicas") {
        _precio_ensalada = 30;
    }
    return _costo;
}


string _tipo_carnePlato_Fuerte() { 
    int v;
    v = 0;
    string _tipo_carne;
    while (v == 0) {
        cout << "Para las Carnes  tenemos tres opciones \n1) Arrachera \n2) Picaña \n3) Bistec"; cin>>_tipo_carne;
        if (_tipo_carne == "Arrachera" || _tipo_carne == "Picaña" || _tipo_carne == "Bistec") {
            return _tipo_carne;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tipo_carne;
}

string TerminoPlato_Fuerte() { 
    int v;
    v = 0;
    string _termino;
    while (v == 0) {
        cout << "Para la carne puedes seleccionar de los siguientes terminos  \n1) Un medio \n2) Tres cuartos \n3) Bien cocido"; cin>>_termino;
        if (_termino == "Un medio" || _termino == "Tres cuartos" || _termino == "Bien cocido") {
            return _termino;  
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _termino;
}

string tamanoPlato_fuerte() { 
    int v;
    v = 0;
    string _tamano;
    while (v == 0) {
        cout << "De que tamano quiere el plato fuerte/ carne \n1) Grande \n2) Mediana \n3) Chica" << endl;
        cin >> _tamano;
        if (_tamano == "Grande" ||_tamano == "Mediana" || _tamano == "Chica") {
            return _tamano;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tamano;
}

int costoPlato_Fuerte(string _tamano) { 

    int _costo;
    _costo=0;

    if (_tamano
     == "Grandes") {
        _costo = 90;
    }
    if (_tamano == "Medianas") {
        _costo = 80;
    }
    if (_tamano == "Chicas") {
        _costo = 75;
    }
    return _costo;
}



string terminoPlato_Fuerte() { 
    int v;
    v = 0;
    string _termino;
    while (v == 0) {
        cout << "Para la carne puedes seleccionar de los siguientes terminos  \n1) Un medio \n2) Tres cuartos \n3) Bien cocido"; cin>>_termino;
        if (_termino == "Un medio" || _termino == "Tres cuartos" || _termino == "Bien cocido") {
            return _termino;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _termino;
}

string tipo_lecheCafe() { 
    int v;
    v = 0;
    string _tipo_leche;
    while (v == 0) {
        cout << "Para la leche tenemos tres opciones \n1) Entera \n2) Light \n3) Deslactosada"; cin>>_tipo_leche;
        if (_tipo_leche == "Entera" || _tipo_leche == "Lighta" ||_tipo_leche == "Deslactosada") {
            return _tipo_leche;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tipo_leche;
};

string azucarCafe() { 
    int v;
    v = 0;
    string _azucar;
    while (v == 0) {
        cout << "Que tipo de azucar quieres \n1) Mascanbado \n2) Blanca"; cin>>_azucar;
        if (_azucar == "Blanca" || _azucar == "Normal") {
            return _azucar;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _azucar;
};

string tamanoCafe() { 
    int v;
    v = 0;
    string _tamano;
    while (v == 0) {
        cout << "De que tamano quiere tu bebida \n1) Grande \n2) Mediana \n3) Chica" << endl;
        cin >> _tamano;
        if (_tamano == "Grande" || _tamano == "Mediana" || _tamano == "Chica") {
            return _tamano;
            v = 1;
        }
        else {
            cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            v = 0;
        }
    }
    return _tamano;
}

int costoCafe(string _tamano) { 

    int _costo;
    _costo=0;

    if (_tamano
     == "Grandes") {
        _costo = 90;
    }
    if (_tamano == "Medianas") {
        _costo = 80;
    }
    if (_tamano == "Chicas") {
        _costo = 75;
    }
    return _costo;
}

int main(){
cout<<"===================================================================================="<<endl;
cout<<"                                 Menu interactivo                                   "<<endl;
cout<<"===================================================================================="<<endl;
cout<<""<<endl;
cout<<"En este menu interactivo vas a poder elegir entre varias opciones con el fin de poder sacar el precio final"<<endl;
cout<<""<<endl;
cout<<"1)Sopa \n2)Ensalada \n3)Plato fuerte \n4)Bebidas \n5)Ninguno \n"<<endl; 
int op;
    while (true){
    	cout<<"Cual de estos te gustaria comprar?";cin>>op;
    	if(op==1){
            string tipoSopa = tipo_sopaSopa();

            string temperaturaSopa= temperatura_sopaSopa();

            string tamano = tamanoSopa();

            int costo = costoSopa(tamano);

            Sopa S1(tamano,costo,tipoSopa,temperaturaSopa);
            cout<<"Tipo de Sopa "<<S1.getSopa()<<endl;

        }else if(op==2){
            string tipoHojaEnsalada = eleccion_hojaEnsalada();

            string toppingEnsalada= temperatura_sopaSopa();

            string tamano = tamanoEnsalada();

            int costo = costoEnsalada(tamano);

            Ensalada E1(tamano,costo,tipoHojaEnsalada,toppingEnsalada);
            cout<<"Tipo de Ensalada "<<E1.getEnsalada()<<endl;
        }else if(op==3){
            string _tipo_carne = _tipo_carnePlato_Fuerte();

            string _termino= TerminoPlato_Fuerte();

            string _tamano = tamanoPlato_fuerte();

            int costo = costoPlato_Fuerte(_tamano);

            PlatoFuerte P1(_tamano,costo,_tipo_carne ,_termino);
            cout<<"Tipo de Plato Fuerte "<<P1.getPlatoFuerte()<<endl;
        }else if(op==4){
            string _tipo_lecheCafe = tipo_lecheCafe();

            string _azucar= azucarCafe();

            string _tamano = tamanoCafe();

            int costo = costoCafe(_tamano);

            Cafe C1(_tamano,costo,_tipo_lecheCafe,_azucar);
            cout<<"Tipo de Sopa "<<C1.getCafe()<<endl;
        }else if(op==5){
            break;
        }else{
            cout<<"Opción inválida, prueba de nuevo"<<endl;    
        }  
    }
    return 0;
    return 0;
}
