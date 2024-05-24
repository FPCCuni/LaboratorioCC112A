/*Define una estructura Persona. Usa new para crear dinámicamente un arreglo de 
Persona. Inicializa el arreglo con datos, muestra los valores de cada Persona y 
luego libera la memoria usando delete[].*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main(){
    int n = 3; 
    Persona *ps = new Persona[n];
 
    (ps+0)->nombre = "Juan";

    cout << "Nombre: " << (ps + 0)->nombre;

    //....
    delete[] ps;




    return 0; 
}