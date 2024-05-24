/*Escribe un programa que defina una estructura Persona con los campos nombre y 
edad. Añade funciones miembro inicializar para asignar valores a los campos y 
mostrar para mostrar los valores por pantalla. Crea una instancia de Persona, 
inicializa sus campos y muestra sus valores usando las funciones miembro.*/


#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;

    void inicializar (string nom, int ed){
        nombre = nom;
        edad = ed;
    }

    void saludar(){
        cout << "Hola soy " << nombre <<endl;
        cout << "Tengo " << edad << " años" <<endl;
    }
};
int main(){
    Persona p;
    p.inicializar("Juan", 34);
    p.saludar();

    return 0; 
}