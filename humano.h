#ifndef HUMANO_H
#define HUMANO_H


#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Humano : public Animal{

public:

    Humano(string nombre);
    // Sobreescritura del método habla
    string habla();
};


#endif // HUMANO_H
