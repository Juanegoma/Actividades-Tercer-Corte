#include <iostream>
#include <map>
using namespace std;

// typedef, se usa para simplificar el codigo.
typedef pair<string, string> par1;

int main()
{

    // Los mapas simepre tomaran pares de valores.
    map<string, string> colombia;
    // Recordar que nunca se repetiran los datos first, en este caso, los departamentos.
    // El dato first, permite buscar mediante ella.
    // El dato second o segundo, es quien acompaña a la llave (first).
    colombia.insert(par1("Amazonas", "Leticia"));
    colombia.insert(par1("Antioquia", "Medellin"));
    colombia.insert(par1("Arauca", "Arauca"));
    colombia.insert(par1("Atlantico", "Barranquilla"));
    colombia.insert(par1("Bogota", "Bogota"));
    colombia.insert(par1("Bolivar", "Cartagena"));
    colombia.insert(par1("Boyaca", "Tunja"));
    colombia.insert(par1("Caldas", "Manizales"));
    colombia.insert(par1("Caqueta", "Florencia"));
    colombia.insert(par1("Casanare", "Yopal"));
    colombia.insert(par1("Cauca", "Popayan"));
    colombia.insert(par1("Cesar", "Valledupar"));
    colombia.insert(par1("Choco", "Quibdo"));
    colombia.insert(par1("Cordoba", "Monteria"));
    colombia.insert(par1("Cundinamarca", "Bogota"));
    colombia.insert(par1("Guainia", "Inirida"));
    colombia.insert(par1("Guaviare", "San Jose del Guaviare"));
    colombia.insert(par1("Huila", "Neiva"));
    colombia.insert(par1("Guajira", "Riohacha"));
    colombia.insert(par1("Magdalena", "Santa Marta"));
    colombia.insert(par1("Meta", "Villavicencio"));
    colombia.insert(par1("Nariño", "Pasto"));
    colombia.insert(par1("Norte de Santander", "Cucuta"));
    colombia.insert(par1("Putumayo", "Mocoa"));
    colombia.insert(par1("Quindio", "Armenia"));
    colombia.insert(par1("Risaralda", "Pereira"));
    colombia.insert(par1("San Andres", "San Andres"));
    colombia.insert(par1("Santander", "Bucaramanga"));
    colombia.insert(par1("Sucre", "Sincelejo"));
    colombia.insert(par1("Tolima", "Ibague"));
    colombia.insert(par1("Valle del Cauca", "Cali"));
    colombia.insert(par1("Vaupes", "Mitu"));
    colombia.insert(par1("Vichada", "Puerto Carreño"));

    // Tipos de clima manejados, Cálido, Templado y Frío.
    map<string, string> clima;
    clima.insert(par1("Leticia", "Cálido"));
    clima.insert(par1("Medellin", "Templado"));
    clima.insert(par1("Arauca", "Cálido"));
    clima.insert(par1("Barranquilla", "Cálido"));
    clima.insert(par1("Bogota", "Frío"));
    clima.insert(par1("Cartagena", "Cálido"));
    clima.insert(par1("Tunja", "Templado"));
    clima.insert(par1("Manizales", "Cálido"));
    clima.insert(par1("Florencia", "Cálido"));
    clima.insert(par1("Yopal", "Cálido"));
    clima.insert(par1("Popayan", "Cálido"));
    clima.insert(par1("Valledupar", "Cálido"));
    clima.insert(par1("Quibdo", "Cálido"));
    clima.insert(par1("Monteria", "Cálido"));
    clima.insert(par1("Cundinamarca", "Frío"));
    clima.insert(par1("Inirida", "Templado"));
    clima.insert(par1("San Jose del Guaviare", "Templado"));
    clima.insert(par1("Neiva", "Cálido"));
    clima.insert(par1("Riohacha", "Cálido"));
    clima.insert(par1("Santa Marta", "Cálido"));
    clima.insert(par1("Villavicencio", "Cálido"));
    clima.insert(par1("Pasto", "Cálido"));
    clima.insert(par1("Cucuta", "Cálido"));
    clima.insert(par1("Mocoa", "Cálido"));
    clima.insert(par1("Armenia", "Cálido"));
    clima.insert(par1("Pereira", "Cálido"));
    clima.insert(par1("San Andres", "Templado"));
    clima.insert(par1("Bucaramanga", "Cálido"));
    clima.insert(par1("Sincelejo", "Cálido"));
    clima.insert(par1("Ibague", "Cálido"));
    clima.insert(par1("Cali", "Cálido"));
    clima.insert(par1("Mitu", "Cálido"));
    clima.insert(par1("Puerto Carreño", "Cálido"));

    
    //Recorre el map de Colombia e imprime el dato first.
    map<string, string>::iterator i;
    cout<<"Departamentos : "<<endl;
    for(i = colombia.begin(); i != colombia.end(); i++){
        //Aqui se imprimira la llave.
        cout<<i ->first <<endl;

    }
    /*
    //Recorre el map de Clima y lo imprime.
    map<string, string>::iterator j;
    cout<<"Clima de cada Capital: "<<endl;
    for(j = clima.begin(); j != clima.end(); j++){
        //Aqui se imprimira la llave y su valor:
        cout<<j ->first<<" | "<<j ->second <<endl;

    }
    */
   //Parte 1.
    string departamento;
    cout<<"Escribe el Departamento del cual deseas conocer su capital y clima: "<<endl;
    cin>>departamento;
    auto y = colombia.find(departamento);
    if (y != colombia.end())
    {
        string capital = y->second;
        auto x = clima.find(capital);
        if (x != clima.end())
        {
            cout << "Departamento: " << departamento << " Capital: " << capital << " Clima: " << x->second << endl;
        }
    }
    /*
    //Parte 2.
    
    string clima;
    cout<<"Tipos de clima manejados, Cálido, Templado y Frío.";
    cout<<"Escribe el Clima del cual deseas conocer que ciudades lo tienen: ";
    cin>>clima;
    auto y = clima.find(clima);
    if (y != clima.end())
    {
        strind departamento = y->
    }
    */
}