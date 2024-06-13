/*(Copiar contenido de un archivo a otro)
Crea un programa que lea un archivo de 
texto y copie su contenido en otro archivo*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream infich("archorigen.txt");

    if(!infich.is_open()){
        cerr << "No pudo abrirse archorigen3.txt" <<endl;
        return 1;
    }

    ofstream outfich("archidestino3.txt");

    string linea;

    while(getline(infich,linea)){
        outfich << linea <<endl;
    }
    

    infich.close();
    outfich.close();

    return 0; 
}