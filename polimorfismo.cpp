#include "hospital.h"

Hospital::Hospital()
{
    this->nombre = "";
}

Hospital::Hospital(string nombre)
{
    this->nombre = nombre;
}

void Hospital::ingresarPaciente()
{
    string nombre;
    int edad;
    double altura;
    double masa;
    bool estaContagiado;

    cout << "\nIngrese el nombre del paciente: ";
    getline(cin,nombre);
    cout << "Ingrese la edad de paciente: ";
    cin >> edad;
    cout << "Ingrese la altura en metros del Paciente: ";
    cin >> altura;
    cout << "Ingrese la masa en kilogramos del Paciente: ";
    cin >> masa;


    // Crear un paciente
    Paciente p(nombre, edad, altura, masa);

    // Preguntar si tiene Covid-19
    cout << "¿El paciente está contiagiado?\n";
    cout << "1: Si\n0: No\n";
    cout << "Ingrese el valor de la prueba: ";
    cin >> estaContagiado;

    // Establecer el valor
    p.setPositivo(estaContagiado);

    // Agregar el paciente a la lista de pacientes
    this->pacientes.push_back(p);

    // Limpiar el buffer de entrada
    cin.ignore();

}

void Hospital::listarPacientes()
{
    cout << "\n= = HOSPITAL " + this->nombre + " = =\n";
    // Recorrer la lista de pacientes
    for(Paciente p : this->pacientes){
        cout << p.ficha();
    }
}






