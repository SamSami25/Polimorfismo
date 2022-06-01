#include <iostream>
#include <string>

#include "animal.h"
#include "perro.h"
#include "gato.h"
#include "humano.h"

using namespace std;

int main(){
    // Crear un vector de punteros de tipo Animal.
    Animal *farm[3];
    // Instancias dinámicas de objetos
    farm[0] = new Perro(" Tarzan");
    farm[1] = new Gato(" Chispas");
    farm[2] = new Humano(" Juan Carlos");
    // Recorrer el vector de objetos
    for (int i = 0; i < 3; i++){

        // Invocación al metodo definido en clase base
        cout << farm[i]->quienEres() << ": ";
        // Llamada al metodo polimorfico
        cout<< farm[i]->habla() << endl;
    }
}


