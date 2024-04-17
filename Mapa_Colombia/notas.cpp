#include <iostream>
#include <map>
#include <set>
using namespace std;

// typedef, se usa para simplificar el codigo.
typedef pair<string, set<string>> par1;
typedef pair<string, float> par2;

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
    estudiante.insert(par1(nombreEstudiante, {nombreAsignatura}));
    // Agrega nombre de la asignatura y nota del estudiante al MAP asignaturas.
    asignaturas.insert(par2(nombreAsignatura, notaEstudiante));
}

// Función para Mostrar la nota de una asignatura especifica de un estudiante especifico.
void mostrarNota(map<string, set<string>> estudiante, map<string, float> asignaturas)
{

    string nombreEstudiante;
    string nombre;
    string asignatura;

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
        cout<<"Ingrese la asignstura de la cual desea conocer la nota: "<<endl;
        cin>> asignatura ;
        map<string, float>::iterator i = asignaturas.find(asignatura);
        //Decir que si existe la nota (true)
        if (i != asignaturas.end())
        {
        cout<<"Nota del estudiante: " << i->second << endl;
        cout<<"El nombre del estudainte es: "<< nombre <<"Las asignaturas del estudiante son: "<< asignatura <<"La nota del estudiante es: "<< i->second <<endl;

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