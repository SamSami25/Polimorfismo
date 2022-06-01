#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

using namespace std;

class Paciente
{
private:
    int id;                     /* Número de indentificador del paciente*/
    string nombre;              /* Nombre del paciete */
    int edad;                   /* Edad del paciente*/
    bool positivo;              /* Si da positivo para la prueva de Covid-19 */
    string tieneCovid();
    char genero;                /* Género del Paciente */
    double altura;              /* Altura en metros del Paciente */
    double masa;                /* Masa en kilogramos del Paciente */
    string DadoAlta();          /* Dado de Alta y sin Covid-19 */

public:
    static int totalPacientes;  /* Contador estático de pacientes que se crean */

    Paciente();
    Paciente(string nombre, int edad, double altura, double masa);
    string ficha();
    void setPositivo(bool newValue);
};

#endif // PACIENTE_H
