//DEFINIENDO UN ARREGLO DE ESTRUCTURAS
/*Escriba un programa que defina un arreglo de 3 elementos de la estructura 
Persona (con campos nombre y edad). Inicializa el arreglo con datos y muestra los 
valores de cada persona por pantalla.*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main(){
    /*
    Persona p[3];

    for(int i = 0; i < 3; ++i){
        cout << "Ingrese el nombre " << i+1 << ": ";
        cin >>p[i].nombre;
        cout << "Ingrese la edad " << i+1 << ": ";
        cin >> p[i].edad;
    }

    cout<< "\nLos datos introducidos son:\n ";
    for(int i = 0; i < 3; ++i){
        cout << "Nombre " << i+1 << ": " << p[i].nombre <<endl;
        cout << "Edad " << i+1 << ": " << p[i].edad<<endl;
    }
    */

   Persona p[3] ={{"Juan", 23},{"Pedro", 32},{"Luis",33}};

   cout<< "\nLos datos introducidos son:\n ";
    for(int i = 0; i < 3; ++i){
        cout << "Nombre " << i+1 << ": " << p[i].nombre <<endl;
        cout << "Edad " << i+1 << ": " << p[i].edad<<endl;
    }
    return 0; 
}