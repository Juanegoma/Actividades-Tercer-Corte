#include <iostream>
#include <map>
using namespace std;

// typedef, se usa para simplificar el codigo.
typedef pair<string, string> par1;

// Función para Registrar una Nota.
void registrarNota(map<string, set<string>> estudiante, map<string, float> asignaturas)
{
    string nombreEstudiante;
    string nombreAsignatura;
    float notaEstudiante;

    cout << "Ingrese el nombre del Estudiante: " << endl;
    cin >> nombreEstudiante;
    cout << "Ingrese el nombre de la Asignatura: " << endl;
    cin >> nombreAsignatura;
    cout << "Ingrese la nota del Estudiante: " << endl;
    cin >> notaEstudiante;

    // Agrega nombre del estudiante y nombre de la asignatura al MAP estudiante.
    estudiante.insert(pair1(nombreEstudiante, {nombreAsignatura}))
        // Agrega nombre de la asignatura y nota del estudiante al MAP asignaturas.
        asignaturas.insert(pair1(nombreAsignaturas, notaEstudiante))
}

// Función para Mostrar la nota de una asignatura especifica de un estudiante especifico.
void mostrarNota(map<string, set<string>> estudiante, map<string, float> asignaturas)
{

    string nombre;
    cout << "Ingrese el nombre del estudiante para conocer la nota de una asignatura especifica: " << endl;
    cin >> nombre;
    map<string, set<string>>::iterator i = estudiante.find(nombreEstudiante);
    if (i != estudiante.end())
    {
        cout << "Asignaturas del estudiante " << nombre << ": " << endl;
        for (string asignatura : i->second)
        {
            // Aqui se imprimira la asignatura.
            cout << asignatura << endl;
        }
    }
}

int main()
{
    // Nombre Estudiante-Asignaturas.
    map<string, set<string>> estudiante;
    // Asignatura-Nota Asignatura.
    map<string, float> asignaturas;
}