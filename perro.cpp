#include "perro.h"

Perro::Perro(string nombre) : Animal(nombre){

    this->queSoy = " perro ";
}

string Perro::habla(){

    return " guau! guau! ";
}
