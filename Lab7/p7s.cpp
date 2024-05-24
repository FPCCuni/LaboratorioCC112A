/*Escriba un programa que defina una estructura Persona. Usa el operador new para 
crear dinámicamente una instancia de Persona, asigna valores a sus campos y 
muestra estos valores. Luego, libera la memoria usando delete.*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main(){
    Persona *p =  new Persona;
    p->nombre = "Pedro";
    p->edad = 23;

    cout << "Nombre: " << p->nombre<<endl;
    cout << "Edad: " << p->edad <<endl;

    delete p;




    return 0; 
}