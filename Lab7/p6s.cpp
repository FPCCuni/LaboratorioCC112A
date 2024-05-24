//ANIDAR ESTRUCTURAS
/*Implementar un programa que realice las siguientes acciones: 
a. Define una estructura Direccion con los campos calle y numero.  
b. Define una estructura Persona que contenga un nombre, edad y una 
Direccion.  
c. Crea una instancia de Persona con una dirección y muestra todos los 
datos.*/
#include <iostream>
using namespace std;

struct Direccion{
    string avenida;
    int numero;
};

struct Persona{
    string nombre;
    int edad;
    Direccion dir;
};

int main(){
    Persona p = {"Juan", 23, {"Avenida 2 de mayo", 234}};
    cout << "Nombre: " << p.nombre <<endl;
    cout << "Edad: " << p.edad <<endl;
    cout << "Direccion: " << p.dir.avenida << " " <<p.dir.numero <<endl; 

    return 0; 
}