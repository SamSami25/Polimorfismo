#include "humano.h"

Humano::Humano(string nombre) : Animal(nombre){

    this->queSoy = " humano ";
}

string Humano::habla(){

    return " habla mijin! ";
}
