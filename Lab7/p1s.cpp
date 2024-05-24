// DEFINIENDO ESTRUCTURAS
/*1. Escribe un programa que defina una estructura Persona con los campos nombre 
(cadena de caracteres) y edad (entero). Crea una instancia de Persona, asigna 
valores a sus campos y muestra estos valores por pantalla. */

#include <iostream>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};


int main(){
    Persona p;
    p.nombre = "Juan";
    p.edad = 32;

    /*
    cout << "ingrese su edad: "; 
    cin >> p.edad;
    cin.ignore();
    cout << "ingrese el nombre: ";
    cin.getline(p.nombre,20);
    */

   

    //mostrando los datos
    cout << "Nombre: " << p.nombre <<endl;
    cout << "Edad: " << p.edad <<endl;

    return 0; 
}