/*(Escribiendo en un archivo de texto) 
Escribe un programa que tome una cadena de 
texto del usuario y la escriba en un archivo. */

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream outfich("arch2.txt", ios::out | ios::app);

    string linea;

    cout << "Ingrese una cadena: ";
    getline(cin, linea);

    outfich << linea;

    outfich.close();


    return 0; 
}