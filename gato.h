#ifndef GATO_H
#define GATO_H


#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Gato : public Animal{

public:

    Gato(string nombre);
    // Sobreescritura del método habla
    string habla();
};

#endif // GATO_H
