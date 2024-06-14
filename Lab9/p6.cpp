/*(Contar palabras en un archivo)
Crea un programa que lea un archivo de texto y 
cuente el número de palabras. */

#include <iostream>
#include <fstream> //para manejar I/O archivos
#include <sstream> // para manejar  I/O cadenas
#include <string>
//#include<ctring> //strtok()
using namespace std;

int main(){

    ifstream infich("arch52.txt"); //abre el archivo en modo lectura

    string linea, palabra;

    //char str[100];
    int cont = 0;

    //infich.getline(str, 100);
    while(getline(infich,linea)){
        // char * palabra = strtok(linea," \n")
        istringstream ss(linea); // Creamos un flujo de cadena y
                           // lo inicializamos con la linea leida
        while(ss>>palabra){ // (palabra != ptrnull)
            cont++;
            //
        }
    }

    cout << "Numero de palabras: " << cont << endl;

    infich.close();


    return 0; 
}

//TAREA: Modificar el programa solamente utilizando 
//cadenas de caracteres y sus funciones para su manejo 