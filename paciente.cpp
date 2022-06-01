#include "paciente.h"

string Paciente::tieneCovid()
{
    /*
    string positivo;
    if (this->positivo) {
        positivo = "positivo";
    }else {
        positivo = "negativo";
    }
    return positivo;
    */
    return this->positivo ? "Si" : "No";
}
/**
 * @brief Paciente::Paciente Constructor por defecto
 */
Paciente::Paciente()
{
    this->id = 0;
    this->edad = 0;
    this->nombre = "";
    this->positivo = false;
    this ->altura = 0;
    this ->masa = 0;
}

/**
 * @brief Paciente::Paciente Constructor parametrizado
 * @param nombre Nombre del paciente
 * @param edad Edad del paciente
 */

Paciente::Paciente(string nombre, int edad, double altura, double masa) : nombre(nombre), edad(edad), altura(altura), masa(masa){

    this->positivo = false;
    // Incrementa el total de pacientes
    Paciente::totalPacientes++;
    // Asignar el número actual como id del paciente
    this->id = Paciente::totalPacientes;
}

string Paciente::ficha()
{

    string str = "ID: " + to_string(this->id) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n" +
            "Tiene Covid-19: " + tieneCovid() + "\n" +
            "Altura: " + to_string(this ->altura) + "\n" +
            "Masa: " + to_string(this->masa) + "\n\n";
    return str;
}

void Paciente::setPositivo(bool newValue)
{
    this->positivo = newValue;
}










