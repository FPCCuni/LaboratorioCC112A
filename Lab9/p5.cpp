/*(Concatenar dos archivos)
Escribe un programa que lea dos archivos de texto y 
concatene su contenido en un tercer archivo.*/

#include <iostream>
#include <fstream>
using namespace std;



int main(){
    ifstream infich1("arch51.txt");
    ifstream infich2("arch52.txt");

    ofstream outfich("arch_concatenado");

    string linea;

    while(getline(infich1, linea)){
        outfich << linea <<endl;
    }

    while(getline(infich2, linea)){
        outfich << linea <<endl;
    }

    infich1.close();
    infich2.close();
    outfich.close();

    return 0; 
}