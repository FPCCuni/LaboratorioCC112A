/*8 Implementa una función que reciba un arreglo dinámico de 
caracteres y su 
tamaño, y devuelva la longitud de la cadena más larga.*/

#include <iostream>
#include <cstring>
using namespace std;

int cadLarga(char** cad, int numCad){
    int maxlong = 0;
    for(int  i=0; i < numCad; i++){
        int longitud = strlen(cad[i]);
        if(longitud > maxlong){
            maxlong = longitud;
        }
    }
    return maxlong;
}

int main(){
    int numCad = 3;
    char **cadenas = new char*[numCad];

    //Ingresar y almacenar las cadenas


    int lonMax = cadLarga(cadenas, numCad);


    //LIBERAR MEMORIA CASO PUNTERO A PUNTERO
    for(int i = 0; i < numCad; i++){
        delete [] cadenas[i]; 
    }
    delete [] cadenas;


    return 0; 
}