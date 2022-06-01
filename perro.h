#ifndef PERRO_H
#define PERRO_H

#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Perro : public Animal{

public:

    Perro(string nombre);
    // Sobreescritura del método habla
    string habla();

};
#endif // PERRO_H
