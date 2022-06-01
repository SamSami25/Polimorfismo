#include "gato.h"


Gato::Gato(string nombre) : Animal(nombre){

    this->queSoy = " gato ";
}

string Gato::habla(){

    return " miau! miau! ";
}
