#include <iostream>
#include <map>
using namespace std;


//typedef, se usa para simplificar el codigo.
typedef par<string, string > par1;

int main{


//Los mapas simepre tomaran pares de valores.
map<string, string > colombia;
//Recordar que nunca se repetiran los datos first, en este caso, los departamentos.
//El dato first, permite buscar mediante ella.
//El dato second o segundo, es quien acompaña a la llave (first).
colombia.insert( par1("Amazonas","Leticia"));
colombia.insert( par1("Antioquia","Medellin"));
colombia.insert( par1("Arauca","Arauca"));
colombia.insert( par1("Atlantico","Barranquilla"));
colombia.insert( par1("Bogota","Bogota"));
colombia.insert( par1("Bolivar","Cartagena"));
colombia.insert( par1("Boyaca","Tunja"));
colombia.insert( par1("Caldas","Manizales"));
colombia.insert( par1("Caqueta","Florencia"));
colombia.insert( par1("Casanare","Yopal"));
colombia.insert( par1("Cauca","Popayan"));
colombia.insert( par1("Cesar","Valledupar"));
colombia.insert( par1("Choco","Quibdo"));
colombia.insert( par1("Cordoba","Monteria"));
colombia.insert( par1("Cundinamarca","Bogota"));
colombia.insert( par1("Guainia","Inirida"));
colombia.insert( par1("Guaviare","San Jose del Guaviare"));
colombia.insert( par1("Huila","Neiva"));
colombia.insert( par1("Guajira","Riohacha"));
colombia.insert( par1("Magdalena","Santa Marta"));
colombia.insert( par1("Meta","Villavicencio"));
colombia.insert( par1("Nariño","Pasto"));
colombia.insert( par1("Norte de Santander", "Cucuta"));
colombia.insert( par1("Putumayo","Mocoa"));
colombia.insert( par1("Quindio","Armenia"));
colombia.insert( par1("Risaralda","Pereira"));
colombia.insert( par1("San Andres","San Andres"));
colombia.insert( par1("Santander","Bucaramanga"));
colombia.insert( par1("Sucre","Sincelejo"));
colombia.insert( par1("Tolima","Ibague"));
colombia.insert( par1("Valle del Cauca","Cali"));
colombia.insert( par1("Vaupes","Mitu"));
colombia.insert( par1("Vichada","Puerto Carreño"));
}