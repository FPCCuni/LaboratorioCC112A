/*(Contar líneas en un archivo) 
Escribe un programa que cuente el número de líneas 
en un archivo de texto*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream infich("arch4.txt");

    if(!infich.is_open()){
        cerr << "No pudo abrirse el archivo" <<endl;
        return 1;
    }

    string linea;

    int cont = 0;

    while(getline(infich,linea)){
        cont++;
    }

    cout << "El archivo tiene " << cont  << " lineas" <<endl;

    infich.close();



    return 0; 
}