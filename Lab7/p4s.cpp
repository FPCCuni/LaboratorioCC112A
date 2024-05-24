//PARAMETROS Y ESTRUCTURAS
/*Implemente un programa que defina una estructura Persona y una función 
mostrarPersona que reciba una Persona como argumento y muestre sus datos. 
Crea una instancia de Persona, inicializa sus campos y llama a la función para 
mostrar los datos.*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

void mostrarpersona(Persona q){
    cout << "Nombre: " << q.nombre <<endl;
    cout << "Edad: " << q.edad << endl;
}


int main(){
    Persona p;
    p.nombre = "Juan";
    p.edad = 34;

    mostrarpersona(p);

    return 0; 
}