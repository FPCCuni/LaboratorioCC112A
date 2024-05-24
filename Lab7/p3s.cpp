//PUNTEROS A ESTRUCTURAS
/*Escriba un programa que defina una estructura Persona y crea una instancia de 
ella. Usa un puntero a la estructura para asignar valores a sus campos y luego 
muestra los valores usando el puntero.*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main(){
    Persona p;
    p.nombre = "Pedro";
    p.edad = 32;

    Persona *ps = &p;

    cout << "nombre: " << ps ->nombre <<endl;
    cout << "Edad: " << ps->edad<<endl;

    //segunda forma
    cout << "nombre: " << (*ps).nombre <<endl;
    cout << "Edad: " << (*ps).edad<<endl;


    return 0; 
}