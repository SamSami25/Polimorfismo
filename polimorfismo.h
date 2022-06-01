#ifndef HOSPITAL_H                  //Guardias de Inclusión
#define HOSPITAL_H

#include <vector>                   // Librerias Propias
#include <iostream>

#include "paciente.h"              // Librerías del Sistema

using namespace std;

class Hospital{

private:

    string nombre;
    vector<Paciente> pacientes;

public:

    Hospital();
    Hospital(string nombre);
    void ingresarPaciente();
    void listarPacientes();
    void darDeAltapaciente();
    void listaPacientesCovid();

};


#endif // HOSPITAL_H
